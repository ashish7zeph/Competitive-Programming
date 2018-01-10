t = input()
for i in range(0, int(t), 1):
    n = raw_input()
    n,m = n.split()
    n = int(n)
    m = int(m)
    if m % n == 0:
        print('Yes')
    else:
        print('No')
