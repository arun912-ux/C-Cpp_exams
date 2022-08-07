

n = int(input())
ar = [int(x) for x in input().split(" ")]
ar2 = ar.copy()
ar.sort()

for i in ar:
    for j in ar2:
        if i == j:
            print(ar2.index(j)+1, end=" ")


