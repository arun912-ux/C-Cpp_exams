
# n = int(input())
# print(bin(n)[2::])

n = int(input())
arr = input().split(" ")
arr = list(map(int, arr))
ev = []
od = []
for i in range(0, n):
    if i % 2==0:
        ev.append(arr[i])
    else:
        od.append(arr[i])

ev.sort()
od.sort()

print(*ev, end=" ")
print(*od)




# print(*arr)



