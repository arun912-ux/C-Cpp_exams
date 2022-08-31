

rows = int(input())
columns = int(input())

# print(rows, columns)

ar = []

for i in range(0, rows):
    
    a = [int(x) for x in input().split(" ")]
    ar.append(a)
    # print(a)


# print(ar)


nar = []

for i in range(rows):
    x = ar[i][0]
    y = ar[i][1]
    a = []
    for j in range(x, y+1):
        a.append(j)
    nar.append(a)


# print(nar)



for i in range(len(nar)):
    # print(nar[i])
    for j in range(i+1, len(nar)):

        for k in nar[i]:
            # print(k)
            if(k in nar[j]):
                print(k)
        
    