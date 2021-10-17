
cnt=0

k = int(input())
n = int(input())
st = input()


for i in range(0, len(st)+1):
    for j in range(i, len(st)+1):
        
        st1 = st[i:j]

        icn = st1.count('1')
        if (icn==2):
            cnt+=1

print(cnt)


