import time, sys

t = '---------------------------------------'
r = '|||||||||||||||||||||||||||||||||||||||'
for char in t:
    #print(char, end = '')
    sys.stdout.write(char)
    sys.stdout.flush()
    time.sleep(0.05)

for char in r:
    print(char)
    #sys.stdout.write(char)
    #sys.stdout.flush()
    time.sleep(0.05)

for char in t:
    print(char, end = '')
    #sys.stdout.write(char)
    #sys.stdout.flush()
    time.sleep(0.05)
