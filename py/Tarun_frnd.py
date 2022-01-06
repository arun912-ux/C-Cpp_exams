
def getPassword(cls, input1, input2):
    s1,s2 = input2.split(",")
    s1 = list(s1)
    s2 = list(s2)

    flag = False
    for i  in range(0, len(s1)):
        for j in range(0, len(s1)):

            if (i+j)%2==0:
                x = s1[i]
                s1[i]=s1[j]
                s1[j]=x
            
                if s1==s2:
                    # print(s1, s2)
                    flag=True
                    break
        
    if flag:
        return 1
    else:
        return 2




n = int(input())
s1 = input()
# s2 = input()
print(getPassword(0, n, s1))