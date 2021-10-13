n = int(input())
k = int(input())

ar = []

for i in range(0,n):
    x = int(input())
    ar.append(x)

arli = []

for i in range(0,n):
    for j in range(0,n):
        if ar[j]+k == ar[i] or ar[j]-k == ar[i]:
            if not ar[j] in arli:
                arli.append(ar[j])


print(len(arli))

