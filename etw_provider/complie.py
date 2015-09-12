import os
import shutil
import time


mc = os.path.join(os.path.dirname(__file__), "..", "tools", "mc.exe")
man = r"yybrowser_events_administrator.man"
cmd = "{MC} -um -mof {man}".format(MC = mc, man = man)
print cmd
os.system(cmd)
