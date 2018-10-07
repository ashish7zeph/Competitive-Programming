s = list(map(int, list(input())))
l = len(s)
dp = [0]*(l+1)
for i in range(l, 0, -1):
    if s[i-1] % 2 == 0: dp[i-1] = dp[i] + 1
    else: dp[i-1] = dp[i]
for i in range(0, l): print(dp[i], end = ' ')
