s = input()
l = len(s)
if l % 4 != 0: print('impossible')
else:
    temp = [0] * 4
    for i in range(l):
        if s[i] == '(': temp[0] += 1
        elif s[i] == ')': temp[1] += 1
        elif s[i] == '[': temp[2] += 1
        else: temp[3] += 1

    if temp[0] != temp[1] or temp[2] != temp[3]:
        print('impossible')
    else:
        a = [0] * l
        i = 0
        count = 0
        for i in range(l):
            if count < l//2 and a[i] == 0:
                if s[i] == '(': y = ')'
                elif s[i] == '[': y = ']'
                else: continue
                for j in range(i+1, l):
                    if s[j] == y and a[j] != 1:
                        a[i] = 1
                        a[j] = 1
                        count += 2
                        break
            elif a[i] == 0:
                a[i] = 2
        print(*a, sep = ' ')
