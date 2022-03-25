
n=int(input())
sp = input()
vow = "aeiouAEIOU"

for c in range(n):
    if not sp.isalnum():
        # print(sp)
        cnt=0
        x= input()
        ret=""
        for w in x:
            if w==sp:
                cnt+=1
            if w in vow:
                cnt+=1
                ret+=sp
            else:
                ret+=w
        
        print(ret, cnt)

    else:
        print("Not a Special Character")
        break


