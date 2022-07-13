"""
Reads hundreds of Device Control Word (DCW) hexadecimal inputs from a text file and converts them to their ASCII equivalents.
Produces the output in both the console and a text file (creates a new one).
"""

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

"""
Console Output:
ì&Ñs¯Ñsv&ÞþïÞ®p%®p/Þ	®®v®0Þþï)»¾®w
®®(
®®®Z®
®®E®8 z} 0
0(®®pÞÊÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈ­À 1ÿ

Text File Output:
ì  &Ñs ¯Ñs v &Þ þ  ïÞ ®p% ®p/ Þ 	® ®v  ® 0 Þ þ  ï)   »¾  ®w
 ®  ®( 
®  ® ®  Z®  
®  ®E ®8  z }     0 
 0 ( ® ®p  Þ   ÊÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈÈ­À   1ÿ
 """
