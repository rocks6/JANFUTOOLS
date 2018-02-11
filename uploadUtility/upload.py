#constants and imports
import os
import sys
from ftplib import FTP

VERSION = 0.01
CURRENT_PATH = os.getcwd() 
BINPBO_PATH = "tools\\BinPBO Personal Edition\\BinPBO.exe"
FTP_USER = "janfumissionmaker"

print "welcome to steves mission upload utility"
print "you are running version " + str(VERSION)

#get mission name from user, check if exists and is directory
#mission = raw_input("please enter the full path of your mission (for example, CO38_Boston_Bizza.Altis)")
mission = "janfuframeworkredux.Stratis"

if (not os.path.isdir(mission)):
	print "cannot find that mission folder. exiting"
	sys.exit(1)

#convert the mission directory to a .pbo

#add revisions if we need to
oldMission = mission
if (os.path.isfile(mission + ".pbo")):
	currRev = 1
	arr = mission.split(".")
	mission = arr[0] + "_r" + str(currRev) + "." + arr[1]
	while (os.path.isfile(mission + ".pbo")):
		currRev += 1
		mission = arr[0] + "_r" + str(currRev) + "." + arr[1]

os.rename(oldMission, mission)
missionDir = CURRENT_PATH + "\\" + mission
	
os.system("\"" + BINPBO_PATH + "\"" + " " + missionDir)
os.rename(mission, oldMission)
print "\n successfully pbo'ed to " + mission + ".pbo"

#connect to JANFU FTP (hardcode IP and port, but not password - have user type that in)
#error check for: bad password, no internet, etc
ftp = FTP()
ftp.connect("142.54.169.114",8821)
print "logging in to FTP with user janfumissionmaker"
passwd = raw_input("please enter FTP password: ")
ftp.login(FTP_USER, passwd)

#navigate to mpmissions dir in the server
ftp.cwd("142.54.169.114_2492")
ftp.cwd("mpmissions")

#create file object to upload
file = open(mission + ".pbo","rb")

#upload the file
ftp.storbinary("STOR " + mission + ".pbo", file)

print "file uploaded successfully."
file.close()
ftp.quit()

