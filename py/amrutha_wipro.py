#python : amrutha

n = int(input())
arr = input().split(" ")
arr = list(map(int, arr))

cnt=0

for i in range(n):
    if i%2 == 0:
        cnt += 1

print(cnt)

