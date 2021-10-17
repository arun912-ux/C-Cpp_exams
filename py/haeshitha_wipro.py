
n = int(input())
arr = input().split(" ")
arr = list(map(int, arr))

cub = []

for i in range(1, 15):
    cub.append(i*i*i)

cnt=0

for i in arr:
    if i in cub:
        cnt += 1


print(cnt)

