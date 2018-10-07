MOD = 1000000007
for _ in range(int(input())):
    n , p = map(int, input().split())
    dp = [0] * (n+1)
    dp[1] = 1
    for i in range(2 , n+1):
        dp[i] += dp[i-1]
        if i < p + 1:
            dp[i] += dp[i-1]
        elif i == p + 1:
            dp[i] += dp[i-1] - dp[i-p]
        else:
            dp[i] += dp[i-1] - dp[i-p-1]
        dp[i] %= MOD
    print(dp[n])
