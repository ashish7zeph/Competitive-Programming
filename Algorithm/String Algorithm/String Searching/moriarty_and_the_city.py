n = int(input())
a = [x for x in input().split()]

temp = a[0]
count = 1
maxCount = 1
for i in range(1, n):
    if a[i] != temp: 
        temp = a[i]
        count = 1
    else: count += 1
    if count > maxCount: maxCount = count

print(maxCount)
    
