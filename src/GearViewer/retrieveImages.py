import os
import subprocess
from subprocess import PIPE
working_dir = r"C:\Users\Steve\Desktop\gv test"
expbo = r"C:\Program Files\PBO Manager v.1.4 beta\PBOConsole.exe"

# get list of all PBOs in directory
pbos = []
for file in os.listdir(working_dir):
    if file.endswith(".pbo"):
        pbo = os.path.join(working_dir, file)
        pbos.append(pbo)
        print("Discovered " + pbo)

# dePBO all PBOs
for pbo in pbos:
    print("DePbo-ing " + pbo)
    pipe = subprocess.call([expbo, "-unpack", pbo, pbo[:-4]], stdout=subprocess.DEVNULL)



# for pbo in pbos:
#     print("DePbo-ing " + pbo)
#     pipe = subprocess.check_output([expbo_dir, pbo], stderr=None, shell=True)
#     print(pipe)
