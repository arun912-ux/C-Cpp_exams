
def checkAnargam(s):
    pass


stlist = list(input().split())
# print(stlist)

dic={}

for i in stlist:
    k = "".join(sorted(i))
    if k in dic.keys():
        dic[k].append(i)
    else:
        dic[k]=[]
        dic[k].append(i)


for (k,v) in dic.items():
    print(*v)


