for _ in range(int(input())):
    n, k = [int(x) for x in input().split()]
    a = []
    for i in range(n): a.append(int(input()))
    a.sort(reverse = True)
    temp = [0]*n
    for i in range(0, n-1): temp[i] = a[i] - a[i+1]
    temp.sort(reverse = True)
    for i in range(k-1): temp[i] = 0
    print(sum(temp))
