n, m = [int(x) for x in input().split()]
temp = []
for i in range(n):
    temp.append(int(input()))
print(temp.index(max(temp)) + 1)
