
a = [int(x) for x in input().split(" ")]
b = [int(x) for x in input().split(" ")]


sm = 0
for i in range(0,len(a)):
    for j in range(0, len(b)):
        sm += max(a[i] + b[j], a[j] + b[i])

print(sm)

