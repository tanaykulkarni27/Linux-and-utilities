import sys
import threading 
import subprocess
def run_command(cmd,i):
	x = subprocess.Popen(cmd,shell= True,stdout=subprocess.PIPE);
	try:
		output = x.communicate(timeout = 5)[0]
		output = output.decode('utf-8');
		if(x.returncode != 0):
			return
		if i == 1:
			print(output);
	except Exception as e:
		print("ERROR TIME LIMIT EXCEEDED");
		exit();
		
cmd = "g++ -std=c++17 "
if(len(sys.argv) <= 1):
	exit();
cmd += '\"' + sys.argv[1] + '\" '
cmd += '-o '
tmp = ""
for i in sys.argv[1]:
	if i == '.':
		break
	tmp += i;
cmd += '\"' + tmp + '\"'
print("RUNNING COMMAND : " + cmd)
run_command(cmd,0)
cmd = './\"'+tmp+'\" '
if(len(sys.argv) >= 3):
	cmd += ' < '+sys.argv[2]+" ";
if '-d' in sys.argv:
	cmd = 'time '+cmd
print("RUNNING COMMAND : " + cmd)
run_command(cmd,1)
run_command("rm \""+tmp+"\"",0)
