#!/usr/bin/env python
# -*- coding: utf-8 -*-
import urllib2
import urllib
import os
import time
from win32com.client import Dispatch
import win32com.client
import shutil
import ConfigParser
import chrome_control

yyexplorer = r"C:\Users\Administrator\AppData\Roaming\duowan\YYExplorer\YYExplorer.exe"
cur_dir = os.path.dirname(__file__)
def get_config(configName,sectionName):
	config = ConfigParser.ConfigParser()
	data = None
	try:
		config.readfp(open(configName, 'rb'))
		data = config.get(sectionName,'value')
	except:
		pass
	return data
server = r"http://%s/task/consume" % get_config(os.path.join(cur_dir, "config.ini"),"server")
class ObtainTask(object):
	"""docstring for ObTask"""
	def __init__(self, params):
		self.params = params
		self.package = ""
	def _get(self):
		while 1:
			try:
				params = urllib.urlencode(self.params)
				url = server + "?" + params
				response = urllib2.urlopen(url)
				task =  eval(response.read().strip())
				if task == None:
					print "No Task, and will sleep 30 seconds!"
					time.sleep(30)
					continue
				else:
					return task
			except:
				print "can not coonect to server.trying......"
				time.sleep(30)
				
	def _write(self, task):
		self.package = task["package"]
		version = os.path.basename(self.package)
		branch = os.path.basename(os.path.dirname(self.package))
		finish = "0"
		progress = []
		task_info = {
			"case":task["case"],
			"version":version,
			"branch":branch,
			"finish":finish,
			"progress":progress,
			"first":"1",
			"times":task["times"],
			"email":task["email"]
		}

		with open(os.path.join(cur_dir, version + ".txt"), "w") as f:
			f.write(str(task_info))
		with open(os.path.join(cur_dir, "version.txt"),"w") as f:
			f.write(version)
			
	def do_obtain(self):
		task = self._get() #获取任务
		print "Task is:", task
		self._write(task)#将任务信息写到本地
		
#----------------------------------------------
from ftplib import FTP
def ftp_down_package(remote_package, local_package):
	"""down package from build machine"""
	#------------login-----------------------
	ftp = FTP()
	timeout = 30
	port = 21
	ftp.connect('172.17.6.41',port,timeout)
	ftp.login('jenkins','build')
	#-----------------------------------------
	
	print ftp.getwelcome()
	ftp.cwd('yye_pre_release')
	ftp_file_name = "\\".join([os.path.basename( os.path.dirname(remote_package) ),
	os.path.basename(remote_package)] )

	local_dir = os.path.dirname(local_package)
	if not  os.path.exists(local_dir):
		os.makedirs(local_dir)

	file_handler = open(local_package,'wb').write
	bufsize = 1024
	print 'RETR %s' % ftp_file_name
	ftp.retrbinary('RETR %s' % ftp_file_name,file_handler,bufsize)
	print "Download file:%s" % local_package
	ftp.quit()
class AutoInstall(object):
	def __init__(self, remote_package):
		self.remote_package = remote_package
		self.AutoItX = Dispatch( "AutoItX3.Control")
		self.yyexplorer = yyexplorer
	

	def _down(self):
		remote_exe = os.path.join(self.remote_package, "yyexplorer_setup.exe")
		version = os.path.basename(os.path.dirname(remote_exe)) #版本信息
		dst_dir = os.path.join(cur_dir,version)
		dst_exe = os.path.join(dst_dir, "yyexplorer_setup.exe")
		if not os.path.exists(dst_dir):
			os.makedirs(dst_dir)

		ftp_down_package(remote_exe, dst_exe)
		return dst_exe
	
	def install(self, path):
		"""
		自动安装
		"""
		self.AutoItX.Run(path)
		self.AutoItX.WinWait("安装YY浏览器".decode("utf-8"),"",60)
		flag = self.AutoItX.ControlClick("安装YY浏览器".decode("utf-8"), "", "1001")
		return flag
	
	def close(self,path):
	    alls = path.split('\\')
	    stat = os.system('taskkill /f /im '+alls[-1])
	    
	
	def forbid_update(self):#关闭升级
		update_path = os.path.join(os.path.dirname(self.yyexplorer),os.path.basename(self.remote_package), "YYExplorerUplive.exe") #升级程序路径
		self.close(update_path)
		time.sleep(5)
		print "update:", update_path
		if os.path.exists(update_path):
			os.remove(update_path)
			
	def do_install(self):
		exe = self._down()#将浏览器安装包拉取到本地
		self.install(exe)#安装浏览器
		time.sleep(15)#等待安装完成
		chrome_control.ShutDown(r'C:\Users\Administrator\AppData\Local\YYExplorer\User Data')#关闭浏览器
		self.forbid_update()#禁止升级


#---------------获取任务--------------------------
ot = ObtainTask({"type":"startupcold"})
ot.do_obtain()
#-------------------------------------------------
#------安装------------------------
ai = AutoInstall(ot.package)	
ai.do_install() #安装
#----------------------------------


#---------测试---------------------
time.sleep(25)
os.system(os.path.join(os.path.dirname(__file__), "do_test.py"))
#------------------------------------
