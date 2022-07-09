import sys
file = open('Hex.txt')
for i in file.readlines():
    t = i.strip().split(',')

new = []

for i in t:
    hex = i
    dec = int(hex, 16)
    a = dec
    a = chr(dec)
    print(a, end = "")
    new.append(a)

for i in new:
    sys.stdout = open('C:\\Users\\AhmedW\\Downloads\\FirstAssignment (Python) - Hex to Ascii\\mydoc2.txt', 'w+', encoding = "utf-8")
    print(''.join(map(str, new)))
    
sys.stdout.close()




