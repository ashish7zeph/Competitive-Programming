c, h, o = [int(x) for x in input().split()]

y = (2 * o - h) / 4     # y no. of CO2 molecules
x = (h - 2 * c + 2 * y) / 2     # x no. of water molecules
z = (c - y) / 6     # z no. of glucose molecules

# if negative or decimal values, inconsistent
if x < 0 or int(x) != x: print('Error')
elif y < 0 or int(y) != y: print('Error')
elif z < 0 or int(z) != z: print('Error')
else: print(int(x), int(y), int(z))
