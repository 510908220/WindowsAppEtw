#!/usr/bin/env python
# -*- coding: utf-8 -*-


#load config
#根据配置文件做一些操作，比如生成结果。将结果拷贝到指定目录

#根据配置文件，生成一份临时结果，然后将数据拷贝到指定目录

import time
import os
import sys
import shutil
import urllib2
import subprocess
import logging
import sys
import ConfigParser
import chrome_control

cur_dir = os.path.dirname(__file__)
start_app = os.path.join(cur_dir, "startyye.exe")
yyexplorer = r"C:\Users\Administrator\AppData\Roaming\duowan\YYExplorer\YYExplorer.exe"
tool_dir = os.path.join(os.path.dirname(__file__), "wpt")
xperf = os.path.join(tool_dir, "xperf.exe")

#-----------------当前测试版本------------------------
def get_version():
	version = ""
	with open(os.path.join(cur_dir, "version.txt")) as f:
		version = f.read().strip()
	return version
version = get_version()
#-------------------------------------------------------
def get_config(configName,sectionName):
	config = ConfigParser.ConfigParser()
	data = None
	try:
		config.readfp(open(configName, 'rb'))
		data = config.get(sectionName,'value')
	except:
		pass
	return data
#--------------------------日志设置---------------------
log_file = os.path.join(cur_dir, version + ".log")
logger = logging.getLogger("startuplog")
formatter = logging.Formatter('%(name)-12s %(asctime)s %(levelname)-8s %(message)s', '%a, %d %b %Y %H:%M:%S',)
file_handler = logging.FileHandler(log_file)
file_handler.setFormatter(formatter)
logger.addHandler(file_handler)
#-------------------------------------------------------
#---------------------------注册表-----------------------
def clear_reg(filename):
	"""
	清理注册表
	"""
	sub = r"Software\Microsoft\Windows\CurrentVersion\Run"
	name = filename
	import _winreg
	key_ = _winreg.OpenKey(_winreg.HKEY_CURRENT_USER,sub,0,_winreg.KEY_ALL_ACCESS)
	_winreg.DeleteValue(key_,name)
	_winreg.CloseKey(key_)
	
def auto_start(filename):
	"""
	添加自动启动
	args:
		filename:待添加项路径
	"""
	sub = r"Software\Microsoft\Windows\CurrentVersion\Run"
	name = filename 
	import _winreg
	key_ = _winreg.OpenKey(_winreg.HKEY_CURRENT_USER,sub,0,_winreg.KEY_ALL_ACCESS)
	_winreg.SetValueEx(key_,name,0, _winreg.REG_SZ,filename)
	_winreg.CloseKey(key_)
#-----------------------------------------------------------------

def run_command(cmd):
	return str(os.system(cmd))

def start_etw():
	errors = ""
	cmd_um = r"wevtutil um " + os.path.join(cur_dir, "yybrowser_events_administrator.man")
	cmd_im = r"wevtutil im " + os.path.join(cur_dir, "yybrowser_events_administrator.man")
	errors += run_command(cmd_um)
	errors += run_command(cmd_im)
	#cmd_trace = r"%s -on Latency+POWER+DISPATCHER+FILE_IO+FILE_IO_INIT -stackwalk PROFILE+CSWITCH+READYTHREAD -buffersize 128 -minbuffers 1024 -start YYTrace-UserSession -on YYBrowser+Microsoft-Windows-Win32k -buffersize 128 -minbuffers 1024" % xperf
	cmd_trace = r"%s -on FileIO -buffersize 128 -minbuffers 1024 -start YYTrace-UserSession -on YYBrowser -buffersize 128 -minbuffers 1024" % xperf
	errors += run_command(cmd_trace)
	logger.error("cmd_trace:" + cmd_trace)
	logger.error("start_etw:" + errors)
	
def add_copy_out(out, index):
	etl_dir = os.path.join(cur_dir, version)
	if not os.path.exists(etl_dir):
		os.makedir(etl_dir)
	dst = os.path.join(etl_dir, index + ".etl")
	shutil.copy(out, dst)
	
def stop_etw(task_info):
	errors = ""
	index = str(len(task_info["progress"]) + 1)
	out = os.path.join(cur_dir, "YYExplorer.etl")
	cmd_stop = r"{xperf} -stop YYTrace-UserSession -stop -d {out}".format(xperf = xperf, out = out)
	errors += run_command(cmd_stop)
	add_copy_out(out, index)
	errors += run_command(os.path.join(cur_dir, "process.py"))
	logger.error("stop_etw:" + errors)

def close_app(app):
    #alls = app.split('\\')
    #stat = os.system('taskkill /f /im '+alls[-1])
    chrome_control.ShutDown(r'C:\Users\Administrator\AppData\Local\YYExplorer\User Data')
    
def close_task(task_info):
    """
    关闭进程
    """
    close_app(yyexplorer) #关闭YYBrowser
    #close_app(start_app) #关闭启动YYBrowser 程序
    time.sleep(1)
    stop_etw(task_info)

import ctypes;
def run_app(app_path):
	#cmd = [app_path, '--etw-info']
	#subprocess.Popen(cmd)
	handler = None;
	operator = "open";
	fpath = app_path;
	param = '--etw-info';
	dirpath = None;
	ncmd = 1;
	shell32 = ctypes.windll.LoadLibrary("shell32.dll");
	shell32.ShellExecuteA(handler, operator, fpath, param, dirpath, ncmd);
	
def	run_task():
	os.startfile(r'C:\Users\Administrator\Desktop\Dbgview.exe')
	start_etw() #开启ETW记录
	time.sleep(15)
	#prefetch()
	#time.sleep(10)
	run_app(yyexplorer) #启动浏览器


def get_task_path():
	task_path = os.path.join(cur_dir, version + ".txt")
	return task_path

def	load_task():
	task_path = get_task_path()
	task_info = {}
	with open(task_path) as f:
		task_info = eval(f.read().strip())
	return task_info

def report(task_info):
	server = r"http://%s/monitor/add" % get_config(os.path.join(cur_dir, "config.ini"),"server")
	try:
		response = urllib2.urlopen(server, str(task_info), 60)
	except:
		pass

def update(task_info):
	logger.error("before update task_info:" + str(task_info))

	startup__info_path = os.path.join(cur_dir, "startup.txt")
	startup_info = {"startup":"-1"}
	if os.path.exists(startup__info_path):
		with open(startup__info_path) as f:
			startup_info = eval(f.read().strip())
	task_info["progress"].append(startup_info)
	logger.error("after update task_info:" + str(task_info))
	task_path = get_task_path()
	with open(task_path, "w") as f:
		f.write(str(task_info))
	if len(task_info["progress"]) == int(task_info["times"]):
		task_info["finish"] = "1"

		displayname = "冷启动"
		success = True
		detail = task_info
		report_data = { 
			"displayname":displayname, 
			"success":success,
			"detail":detail
			}

		report(str(report_data))
		with open("c:\\log.txt", "w") as f:
			f.write(str(report_data))
		return True
	report(task_info)
	return False

def clean_up(task_info):
	"""测试完后将etl、log文件拷贝到远程目录"""
	files = []
	etl_dir = os.path.join(cur_dir, version)
	for root, dirs, files in os.walk(etl_dir):
		break
	etl_files = [os.path.join(etl_dir, f) for f in files if f.split(".")[1] == "etl"]
	dst_dir = os.path.join(r"\\172.17.6.41\share", version)

	if not os.path.exists(dst_dir):
		os.mkdir(dst_dir)

	src_log = os.path.join(cur_dir, version + ".log")
	dst_log = os.path.join(dst_dir,version + ".log")
	shutil.copy(src_log, dst_log)
	
	for etl_file in etl_files:
		etl_name = os.path.basename(etl_file)
		dst_etl = os.path.join(dst_dir, etl_name)
		shutil.copy(etl_file, dst_etl)

	etl = os.path.join(cur_dir, "YYExplorer.etl")
	if os.path.exists(etl):
		os.remove(etl)

def prefetch():
	fetch_app = os.path.join(cur_dir, "fetch", "readPageFaults.exe")
	subprocess.Popen(fetch_app)

def do_task(task_info):
	time.sleep(80)
	run_task() #开始测试,开启etw

	time.sleep(20)
	close_task(task_info)#任务结束,处理etw

	finish = update(task_info)
	if not finish:
		print "rebot, and go on testing!"
		run_command('Shutdown -r -t 1')
	else:
		print "test finished. and will get new Task!"
		clear_reg(__file__)
		clean_up(task_info)
		os.system(os.path.join(cur_dir, "get_task.py"))#启动任务获取 脚本，继续处理任务
		
if __name__ == '__main__':

	logger.error("main")
	task_info = load_task()

	if  task_info["first"] == "1":#第一次运行
		auto_start(__file__)
		report(task_info)
		task_info["first"] = "0"
		task_path = get_task_path()
		with open(task_path, "w") as f:
			f.write(str(task_info))
		print "rebot"
		run_command('Shutdown -r -t 1')
	else:
		do_task(task_info)




