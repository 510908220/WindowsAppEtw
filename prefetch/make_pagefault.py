#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import sys
import csv
import time
import collections
import shutil

extract_dir = os.path.dirname(__file__)
tool_dir = os.path.join(extract_dir, r"..\wpt")
wpaexporter = os.path.join(tool_dir, "wpaexporter.exe")

def etl_to_csv(etl_name, wpa_profile, output_folder, start = None, end = None):
	if start and end:
		cmd = "{wpaexporter} -i {etl_name} -profile {wpaProfile} \
				-outputfolder {outputfolder} -range {start}s {end}s\
				".format(wpaexporter = wpaexporter, etl_name  = etl_name,
				outputfolder = output_folder, wpaProfile = wpa_profile, start = start, end = end)
	else:
		cmd = "{wpaexporter} -i {etl_name} -profile {wpaProfile} \
				-outputfolder {outputfolder}\
				".format(wpaexporter = wpaexporter, etl_name  = etl_name,
				outputfolder = output_folder, wpaProfile = wpa_profile)
	print "cmd:", cmd
	os.system(cmd)

def get_startup_point(etl_name, wpa_profile, output_folder):
	"""获取启动起点跟终点"""
	startup  = []
	process = None
	cvs_path  = os.path.join(output_folder, r"Generic_Events_Activity_by_Provider,_Task,_Opcode.csv") #这个名字与wpaProfile配置相关
	etl_to_csv(etl_name, wpa_profile, output_folder)
	reader = csv.reader(open(cvs_path))
	for info in reader:
		if info[0]== "58f76a70-4a4f-4370-9179-5e7634085faf":#provider id
			id = info[1].strip()
			if len(startup) == 0 and id == "111":
				process = info[2]
				startup.append(info[3])
			if len(startup) == 1 and id == "112":
				startup.append(info[3])
	startup.append(process)
	return startup

def get_pagefaults(etl_name, wpa_profile, output_folder, process, start, end):
	pagefaults_infos = {}
	cvs_path  = os.path.join(output_folder, r"Hard_Faults_Summary_Table_Count.csv")
	etl_to_csv(etl_name, wpa_profile, output_folder, start, end)
	reader = csv.reader(open(cvs_path))
	for info in reader:#['YYExplorer.exe (2876)', 'C:\\Windows\\SysWOW64\\shdocvw.dll', '1', '0x0000000000001400', '32768']
		if info[0]== process:#provider name and len(os.path.split(info[1])) == 2
			if not pagefaults_infos.has_key(info[1]):
				pagefaults_infos[info[1]] = {"count":int(info[2]), "pages":[[info[3], info[4]]]}
			else:
				pagefaults_infos[info[1]]["count"] += int(info[2])
				pagefaults_infos[info[1]]["pages"].append([info[3], info[4]])
	return pagefaults_infos

def tuple_to_list(tuple_items):
	list_items = []
	for tuple_item in tuple_items:
		list_items.append([tuple_item[0], tuple_item[1]])
	return list_items

def merge(pages):
	for i in range(len(pages) - 1):
		if int(pages[i][0]) + int(pages[i][1]) == int(pages[i + 1][0]):
			pages[i + 1][0] = pages[i][0]
			pages[i + 1][1]  = str(int(pages[i + 1][1]) + int(pages[i][1]))
			pages[i] = []
	none_page_nums = pages.count([])
	for i in range(none_page_nums):#移除合并后空的信息
		pages.remove([])

def make_prefetch_info(prefetch_files, result_dir):
	merge_pages = {}
	for prefetch_file in prefetch_files:
		with open(prefetch_file) as f:
			for page in f:
				offset, bytes = page.strip().split("-")
				if not merge_pages.has_key(offset):
					merge_pages[offset] = bytes
				else:
					old_bytes = merge_pages[offset]
					if int(old_bytes) < int(bytes):
						merge_pages[offset] = bytes
	tuple_pages = sorted(merge_pages.iteritems(), key = lambda item : int(item[0]))
	list_pages = tuple_to_list(tuple_pages)
	with open(os.path.join(result_dir, r"..\StartInfo.txt"), "w") as f:
		for page in list_pages:
			f.write(page[0] + "-" + page[1] + "\n")

def process_etl(flag, result_dir):
	etl_file = os.path.join(result_dir, "yybrowser.etl")
	if not os.path.exists(etl_file):
		raise "yybrowser.etl not exists"
	startup_wpa_profile = os.path.join(extract_dir, r"startup.wpaProfile")
	pagefaults_wpa_profile = os.path.join(extract_dir, r"pagefaults_win7.wpaProfile")
	start, end, process =  get_startup_point(etl_file, startup_wpa_profile, result_dir)
	print start, end, process
	pagefaults_infos  = get_pagefaults(etl_file, pagefaults_wpa_profile, result_dir, process, start, end)
	output = os.path.join(result_dir, "StartInfo.txt")
	
	with open(output, "w") as f:
		for key in pagefaults_infos:
			if os.path.basename(key).find("chrome.dll") != -1:
				write_item =  ""
				for page in pagefaults_infos[key]["pages"]:
					write_item += (str(int(page[0], 16)) + "-" + page[1])
					write_item += "\n"
				f.write(write_item)
		time.sleep(2)
	time.sleep(2)

	if flag == 1:
		prefetch_files = []
		addtion = os.path.join(extract_dir, r"addtion\HardCodeOffset.txt")
		prefetch_files.append(addtion)
		result_0 = os.path.join(result_dir, r"..\0\StartInfo.txt")
		prefetch_files.append(result_0)
		prefetch_files.append(output)
		make_prefetch_info(prefetch_files, result_dir) #简单合并
		output_src = os.path.join(result_dir, r"..\StartInfo.txt")
		output_dst = os.path.join(result_dir, r"..\..\extract\StartInfo.txt")
		copy_and_rename = 'copy "' + output_src + '" "' + output_dst + '" /Y'
		print copy_and_rename
		os.system(copy_and_rename)

if __name__ == '__main__':
	sys.exit(0)