
class propertydealer:

    id=0
    dic={}
    # dic = {propertytype : propertyprice}

    def __init__(self, id, dic):
        self.id = id
        self.dic= dic


def solutionFuntion(proList, dic):
    #commision=pv*(rateofcommision/100),   rateofcommision=obj.dic.pv

    cnt=0
    retdic = {}
    for dealer in proList:
        flag=True
        comm=0
        for k,v in dic.items():
            # print(k,v)
            if k in dealer.dic:
                flag=True
                # print(dealer.dic[k]/100)
                comm += v*(dealer.dic[k]/100.0);
                # print(k,v)
                # print(dealer.id, comm)
                # print(comm)
            else:
                flag=False
                comm=0
                break
        
        if flag:
            # print(dealer.id)
            # print(str(dealer.id) + ":" + str(int(comm)))
            retdic[dealer.id]=int(comm)
            cnt+=1


    if cnt==0:
        print("No Dealers Found")
    else:
        mnv = min(retdic.values())
        # print(mnv)
        for k,v in retdic.items():
            # print(k,v)
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
        # print(obj.dic)
        proList.append(obj)
    
    # print(proList)
    # now user inputs
    # dic.clear()
    di={}
    N = int(input())
    for i in range(N):
        pn=input()
        pv=int(input())
        di[pn]=pv
    
    solutionFuntion(proList, di)



main()






















