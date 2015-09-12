#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import sys
import time
import subprocess
import make_pagefault
import win32api
import chrome_control

training_dir = os.path.dirname(__file__)
tool_dir = os.path.join(training_dir, "wpt")
xperf = os.path.join(tool_dir, "xperf.exe")

def rumcommand(cmd):
	os.system(cmd)

def run_app(app_path):
	subprocess.Popen(app_path)

def close_app(app):
    #alls = app.split('\\')
    #stat = os.system('taskkill /f /im '+ alls[-1])
    chrome_control.ShutDown(r'C:\Users\Adapter\AppData\Local\YYExplorer\User Data')
	#clientui.close_yye()

def lunch(bin_path):
	app_path = os.path.join(bin_path, "YYExplorer.exe --etw-info")
	run_app(app_path)

def close(bin_path):
	app_path = os.path.join(bin_path, "YYExplorer.exe")
	close_app(app_path)

def get_chrome_version(bin_path):
	lang, codepage = win32api.GetFileVersionInfo(bin_path + '\\YYExplorer.exe', '\\VarFileInfo\\Translation')[0]
	# # \VarFileInfo\Translation returns list of available (language, codepage) pairs that can be used to retreive string info
	# # any other must be of the form \StringfileInfo\%04X%04X\parm_name, middle two are language/codepage pair returned from above
	str_info = u'\\StringFileInfo\\%04X%04X\\%s' % (lang, codepage, 'ProductVersion')
	# # print str_info
	return win32api.GetFileVersionInfo(bin_path + '\\YYExplorer.exe', str_info)

def do(bin_path, flag):
	cur_dir = os.getcwd()
	version = get_chrome_version(bin_path)
	print(version)
	print "start gather!"
	os.chdir(training_dir)

	time.sleep(10)
	cmd1 = r"wevtutil um yybrowser_events_administrator.man"
	rumcommand(cmd1)
	cmd2 = r"wevtutil im yybrowser_events_administrator.man"
	rumcommand(cmd2)
	
	result_dir = os.path.join(training_dir, version, str(flag))
	if not os.path.isdir(result_dir):
		os.makedirs(result_dir)
	os.chdir(result_dir)

	#开始采集ETL
	cmd3 = r"%s -on Latency+POWER+DISPATCHER+FILE_IO+FILE_IO_INIT -stackwalk PROFILE+CSWITCH+READYTHREAD -buffersize 128 -minbuffers 1024" % xperf
	rumcommand(cmd3)
	cmd4 = r"%s -start YYBrowserSession -on YYBrowser" % xperf
	rumcommand(cmd4)

	#启动浏览器
	time.sleep(5)
	print "Lunch YY:", bin_path
	lunch(bin_path) #启动YY浏览器
	time.sleep(30)
	close(bin_path)

	print "stop gather!"
	#停止采集ETL
	cmd5 = r"%s -stop YYBrowserSession -d User.etl" % xperf
	rumcommand(cmd5)
	cmd6 = r"%s -stop -d Kernel.etl" % xperf
	rumcommand(cmd6)
	cmd7 = r"%s -merge User.etl kernel.etl yybrowser.etl" % xperf
	rumcommand(cmd7)
	time.sleep(5)
	
	make_pagefault.process_etl(flag, result_dir)#结果处理

	os.chdir(cur_dir)

if __name__ == "__main__":
	sys.exit(0)
