
class propertydealer:
    id=0
    dic={}

    def __init__(self, id, dic):
        self.id = id
        self.dic= dic


def solutionFuntion(proList, dic):

    cnt=0
    retdic={}
    for dealer in proList:
        flag=True
        comm=0
        for k,v in dic.items():
            # print(k,v)
            if k in dealer.dic:
                flag=True
                comm += v*(dealer.dic[k]/100.0);
            else:
                flag=False
                comm=0
                break
        
        if flag:
            retdic[dealer.id]=int(comm)
            cnt+=1


    if cnt==0:
        print("No Dealers Found")
    else:
        mnv = min(retdic.values())
        for k,v in retdic.items():
            if v==mnv:
                print(str(k) + ":" + str(v))
                break



def main():

    proList=[]
    N=int(input())
    for i in range(N):
        id=int(input())
        xp=int(input())
        dic={}
        for x in range(xp):
            pn=input()
            pv=int(input())
            dic[pn]=pv
        obj = propertydealer(id, dic)
        proList.append(obj)
    
    di={}
    N = int(input())
    for i in range(N):
        pn=input()
        pv=int(input())
        di[pn]=pv
    
    solutionFuntion(proList, di)



main()

