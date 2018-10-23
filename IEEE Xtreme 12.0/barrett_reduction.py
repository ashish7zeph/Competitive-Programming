import math
A,B = [int(i) for i in input().split()]
d=math.ceil(2**B/A)
print(d)