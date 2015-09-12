#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import  sys
import csv
cur_dir = os.path.dirname(__file__)
tool_dir = os.path.join(cur_dir, "wpt")
wpaexporter = os.path.join(tool_dir, "wpaexporter.exe")
pagefaults_wpa_profile = os.path.join(cur_dir, r"pagefaults_win7.wpaProfile")
disk_usage_by_process = os.path.join(cur_dir, r"disk_usage_by_process.wpaProfile")
class StartInfo(object):
	def __init__(self, etl_name, wpa_profile):
		self.startup_info = {
		"StartUp":[],
		"CreateProfile":[],
		"StartInfo":[],
		"ChromeDll":[],
		"ShowWindow":[],
		"NewBrowser":[],
		"SandBox":[],
		"Pak":[],
		"ResourceDb":[],
		"CreateThreads":[],
		"PostProfileInit":[]
		}
		self.new_tab_info = {"Start":"", "Stop":""}
		self.process = None
		self.etl_name = etl_name
		self.wpa_profile = wpa_profile
	def etl_to_csv(self,etl_name,wpa_profile):
		output_folder = cur_dir
		cmd = "{wpaexporter} -i {etl_name} -profile {wpaProfile} \
					-outputfolder {outputfolder}".format(wpaexporter = wpaexporter, etl_name  = etl_name, outputfolder = output_folder, wpaProfile = wpa_profile)
		os.system(cmd)

	def get_startup_info(self, cvs_path):
		def add_info(event_name, time):
			#YYBrowser-Performance-Record/StartInfo/win:Start
			_, task, info = event_name.split("/")

			if self.startup_info.has_key(task):
				if len(self.startup_info[task]) == 0 and info == "win:Start":
					self.startup_info[task].append(time)
				if len(self.startup_info[task]) == 1 and info == "win:Stop":
					self.startup_info[task].append(time)

		reader = csv.reader(open(cvs_path))
		for info in reader:#Provider Name	Event Name	Process	Time (s)
			if info[0]== "YYBrowser":
				if not self.process:
					self.process = info[2]
				add_info(info[1], info[3])

	def make_start_info(self):
		cvs  = os.path.join(cur_dir, r"Generic_Events_Activity_by_Provider,_Task,_Opcode.csv") #这个名字与wpaProfile配置相关
		if os.path.exists(cvs):
			os.remove(cvs)
		self.etl_to_csv(self.etl_name, self.wpa_profile)
		self.get_startup_info(cvs)
		#一些event name显示不出来，根据操作id去识别
		self.make_other_start_info(cvs)

	def make_other_start_info(self, cvs_path):
		reader = csv.reader(open(cvs_path))
		for info in reader:#Provider Name	Event Name	Process	Time (s)
			if info[4]== "300":
				if not self.new_tab_info["Start"]:
					self.new_tab_info["Start"] = info[3]

			if info[4]== "301":
				if not self.new_tab_info["Stop"]:
					self.new_tab_info["Stop"] = info[3]





class PageFault(object):
	def __init__(self, etl_name, start, end, process):
		self.start = start
		self.end = end
		self.process = process
		self.etl_name = etl_name
	def etl_to_csv(self,wpa_profile, start, end):
		output_folder = os.path.dirname(__file__)
		cmd = "{wpaexporter} -i {etl_name} -profile {wpaProfile} \
					-outputfolder {outputfolder} -range {start}s {end}s\
					".format(wpaexporter = wpaexporter, etl_name  = self.etl_name,
					outputfolder = output_folder, wpaProfile = wpa_profile, start = start, end = end)
		os.system(cmd)
	def get_pagefaults(self):
		pagefaults_infos = {}
		cvs_path  = os.path.join(cur_dir, r"Hard_Faults_Summary_Table_Count.csv")
		self.etl_to_csv(pagefaults_wpa_profile, self.start, self.end)
		reader = csv.reader(open(cvs_path))
		for info in reader:#['YYExplorer.exe (2876)', 'C:\\Windows\\SysWOW64\\shdocvw.dll', '1', '0x0000000000001400', '32768',IOTime]
			if info[0]== self.process:#provider name and len(os.path.split(info[1])) == 2
				if not pagefaults_infos.has_key(info[1]):
					pagefaults_infos[info[1]] = {"counts":int(info[2]), "bytes":int(info[4]),"iotimes":float(info[5])}
				else:
					pagefaults_infos[info[1]]["counts"] += int(info[2])
					pagefaults_infos[info[1]]["bytes"] += int(info[4])
					pagefaults_infos[info[1]]["iotimes"] += float(info[5])
		return pagefaults_infos
class DiskUsage(object):
	def __init__(self, etl_name, start, end, process):
		self.start = start
		self.end = end
		self.process = process
		self.etl_name = etl_name
	def etl_to_csv(self,wpa_profile, start, end):
		output_folder = os.path.dirname(__file__)
		cmd = "{wpaexporter} -i {etl_name} -profile {wpaProfile} \
					-outputfolder {outputfolder} -range {start}s {end}s\
					".format(wpaexporter = wpaexporter, etl_name  = self.etl_name,
					outputfolder = output_folder, wpaProfile = wpa_profile, start = start, end = end)
		os.system(cmd)
	def get_disk_usages(self):
		disk_usage_infos = {}
		cvs_path  = os.path.join(cur_dir, r"Disk_Usage_IO_Time_by_Process,_IO_Type.csv")
		self.etl_to_csv(disk_usage_by_process, self.start, self.end)
		
		reader = csv.reader(open(cvs_path))
		#Process	Path Name	Disk Service Time	Size	IO Time
		for info in reader:#YYExplorer.exe (2956)	C:\Users\Adapter\AppData\Roaming\duowan\YYExplorer\1.3.1840.0\chrome.dll	33754.51	1486848	33754.51
			if info[0]== self.process:#provider name and len(os.path.split(info[1])) == 2
				if not disk_usage_infos.has_key(info[1]):
					disk_usage_infos[info[1]] = {"disk_service_times":float(info[2]), "sizes":int(info[3]),"iotimes":float(info[4])}
				else:
					disk_usage_infos[info[1]]["disk_service_times"] += float(info[2])
					disk_usage_infos[info[1]]["sizes"] += int(info[3])
					disk_usage_infos[info[1]]["iotimes"] += float(info[4])
		return disk_usage_infos
if __name__ == '__main__':
	si = StartInfo(os.path.join(cur_dir, r"YYExplorer.etl"),os.path.join(cur_dir, r"YYExplorer.wpaProfile"))
	si.make_start_info()
	#--------------------------Disk-----------------------------------
	du = DiskUsage(os.path.join(cur_dir, r"YYExplorer.etl"), si.startup_info["StartUp"][0], si.startup_info["StartUp"][1], si.process)
	disk_usages =  du.get_disk_usages()

	total_disk_service_times = 0
	total_iotimes = 0
	total_sizes = 0
	total_file_nums = 0
	detailed = []
	for file_path in disk_usages:
		total_disk_service_times += disk_usages[file_path]["disk_service_times"]
		total_iotimes += disk_usages[file_path]["iotimes"]
		total_sizes += disk_usages[file_path]["sizes"]
		total_file_nums += 1
		detailed.append([os.path.basename(file_path), disk_usages[file_path]["disk_service_times"], disk_usages[file_path]["iotimes"], disk_usages[file_path]["sizes"]])
	detailed.sort(key=lambda x:x[1], reverse=True)
	new_disk_usages = [total_disk_service_times, total_iotimes, total_sizes, total_file_nums, detailed]
	#---------------------------pagefault信息--------------------------
	pf = PageFault(os.path.join(cur_dir, r"YYExplorer.etl"), si.startup_info["StartUp"][0], si.startup_info["StartUp"][1], si.process)
	page_faults = pf.get_pagefaults()

	total_iotimes = 0
	total_bytes = 0
	total_counts = 0
	tool_file_nums = 0
	detailed = []
	for file_path in page_faults:
		total_iotimes += page_faults[file_path]["iotimes"]
		total_counts += page_faults[file_path]["counts"]
		total_bytes += page_faults[file_path]["bytes"]
		tool_file_nums += 1
		detailed.append([os.path.basename(file_path), page_faults[file_path]["iotimes"], page_faults[file_path]["counts"], page_faults[file_path]["bytes"]])
	detailed.sort(key=lambda x:x[1], reverse=True)

	new_page_faults = [total_iotimes, total_counts, total_bytes, tool_file_nums, detailed]
	#---------------------------------------------------------------------

	
	result = {}
	for key in si.startup_info:
		if len(si.startup_info[key]) == 2:
			result[key] = float(si.startup_info[key][1]) - float(si.startup_info[key][0])
		else:
			result[key] = -1
	#-----------新增NewTab点------------------
	if si.new_tab_info["Start"]  and si.new_tab_info["Stop"]:
		result["NewTabAppear"] = float(si.new_tab_info["Stop"]) - float(si.new_tab_info["Start"])
		result["NewTabFinishLoad"] = float(si.new_tab_info["Stop"]) - float(si.startup_info["StartUp"][0])
	#-----------------------------------------
	if result:
		result["PageFaultInfo"] = new_page_faults
		result["DiskUsageInfo"] = new_disk_usages
	
	with open(os.path.join(cur_dir, "startup.txt"),"w") as f:
		f.write(repr(result))

