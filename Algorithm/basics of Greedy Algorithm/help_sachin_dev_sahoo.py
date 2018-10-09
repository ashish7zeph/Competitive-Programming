for _ in range(int(input())):
    s, k = input().split()
    s = list(s)
    k = int(k)
    c = 0
    for i in range(len(s)-k+1):
        if(s[i] == '0'):
            for m in range(i, i+k):
                if(s[m] == '0'): s[m] = '1'
                else: s[m] = '0'
                
            c +=  1
    if('0' in s): print(-1)
    else: print(c)
