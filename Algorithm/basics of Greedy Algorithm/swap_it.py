for _ in range(int(input())):
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    
    for i in range(n-1):
        pos = i
        
        for j in range(i+1, n):
            if j-i > k: break
            elif a[j] < a[pos]: pos = j
            
        for j in range(pos, i, -1):
            a[j], a[j-1] = a[j-1], a[j]
            
        k -= pos - i
        
    print(*a, sep = ' ')
