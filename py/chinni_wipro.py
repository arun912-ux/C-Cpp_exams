import itertools

mnb = input().split(" ")
n,k = list(map(int, mnb))
arr = input().split(" ")
arr = list(map(int, arr))

hjk = list(itertools.permutations(arr, 2))

# print(li)

for i in hjk:
    if sum(i) == k:
        # print(i)
        # g = i
        m,n = i
        break

# print(m,n)
# print(g)
print(arr.index(m), arr.index(n))

