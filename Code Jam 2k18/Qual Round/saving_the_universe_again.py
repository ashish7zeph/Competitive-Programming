def check(s, d):
    temp = 1
    flag = 0
    for i in s:
        if i == 'S':
            flag += temp
        elif i == 'C':
            temp *= 2
    if flag <= d:
        return True
    else:
        return False
def swap(s):
    for i in range(len(s)-2, -1, -1):
        if s[i] == 'C' and s[i+1] == 'S':
            temp = s[i]
            s[i] = s[i+1]
            s[i+1] = temp
            break
    return s
    
for y in range(int(input())):
    d, p = [x for x in input().split()]
    d = int(d)
    s = [x for x in p]
    srt = [x for x in p]
    srt.sort(reverse = True)
    c = minhack = 0
    if check(s, d):
        print('Case #'+str(y+1)+': '+str(minhack))
    else:
        while(s != srt):
            s = swap(s)
            minhack += 1
            if check(s, d):
                print('Case #'+str(y+1)+': '+str(minhack))
                c = 1
                break
        if not c:
            print('Case #'+str(y+1)+': IMPOSSIBLE')
