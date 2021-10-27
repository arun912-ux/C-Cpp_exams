
st = input()
alp=[]
for i in (st):
    if i.isalpha():
        alp.append(i)

print(alp)

ni=[]
k=0
for i in range(0, len(st)):
    if st[i].isdigit():
        s1 = i
        j=i
        while st[j].isdigit():
            j+=1
            
            if j>=len(st):
                j=len(st)-1
                break
        k=j+1
        if j==len(st)-1:
            ni.append(st[i:j+1])
        else:
            ni.append(st[i:j])
    i=k
        # print()

print(ni)

