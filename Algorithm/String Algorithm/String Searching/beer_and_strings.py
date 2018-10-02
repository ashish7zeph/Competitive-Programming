x = input()

alp = [0]*127
for i in x: 
    alp[ord(i)] += 1

count = 0
for i in range(int(input())):
    s = input()
    flag = 1
    for j in s:
        if alp[ord(j)] == 0:
            flag = 0
            break
    if flag: count += 1

print(count)
