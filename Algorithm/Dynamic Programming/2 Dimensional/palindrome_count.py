def pal(a, le):
    temp = le
    for i in range(0, le-1):
        for j in range(i+1, le):
            b = a[i: j+1]
            if b == b[::-1]: temp += 1
    return temp
    
s = list(input())
print(pal(s, len(s)))  
