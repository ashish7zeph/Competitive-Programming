n, q = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

dp1 = [0] * (n+1)
dp2 = [0] * (n+1)

for i in range(n): 
    if i % 2 == 0: dp1[i+1] = a[i] + dp1[i] 
    else: dp1[i+1] = b[i] + dp1[i]
    
for i in range(n): 
    if i % 2 != 0: dp2[i+1] = a[i] + dp2[i] 
    else: dp2[i+1] = b[i] + dp2[i]

for i in range(q):
    x, l, r = [int(x) for x in input().split()]
    if x == 1:
        if l % 2 == 0: print(dp2[r] - dp2[l-1])
        else: print(dp1[r] - dp1[l-1])
    else:
        if l % 2 == 0: print(dp1[r] - dp1[l-1])
        else: print(dp2[r] - dp2[l-1])
