
def getResult(relation):
    li = relation
    dic={}
    nl = []
    for i in range(len(li)):
        k,v = li[i].split("-")
        nl.append(k)
        nl.append(v)

    for i in nl:
        if i not in dic:
            dic[i]=1
        else:
            dic[i]+=1
        

    cl = dic.values()


    return max(cl) + 1



n = int(input())
li = []
for i in range(n):
    li.append(input())

print(getResult(li))

