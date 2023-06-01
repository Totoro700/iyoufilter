import subprocess

def parse(msg):
    return "i " + msg.replace(" ", "").lower() + " you"

while True:
    msg = input("")
    e = parse(msg)
    print(e)
    subprocess.run("clip", text=True, input=e) # only works on windows