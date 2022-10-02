

dic = {}
i=0
while(i<2):
    n = int(input())
    x  = input().strip()
    a = [int(x) for x in x.split()]
    
    for v in a:
        if v in dic:
            dic[v] += 1
        else:
            dic[v] = 1
    i = i+1
    # print(a)

# print(dic)

b = False


for k,v in dic.items():
    if v>1:
        print(k, end=" ")
        b=True

if(b==False):
    print("NO Elements")




try:
    print()
except e:
    print("w")
else:
    print()

int = 10
print(int)






