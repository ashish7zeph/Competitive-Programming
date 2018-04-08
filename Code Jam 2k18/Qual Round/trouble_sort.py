for j in range(int(input())):
    n = int(input())
    v = [int(x) for x in input().split()]
    c = 0
    for k in range(len(v)-2):
        for i in range(len(v)-2):
            if v[i] > v[i+2]:
                temp = v[i+2]
                v[i+2] = v[i]
                v[i] = temp
    for i in range(n-1):
        if v[i] > v[i+1]:
            c += 1
            error = i
            break
    if c > 0:
        print('Case #'+str(j+1)+': '+str(error))
    else:
        print('Case #'+str(j+1)+': OK')
