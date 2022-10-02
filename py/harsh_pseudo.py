


# n=50
# a=0

# # while(n!=0):
# #     r = n%10
# #     a=a*10 + r
# #     n = n/10

# # print(a)


# # t 150
# g = 150*(89)/100
# print(g)

def f(x, y):
    if(x<y):
        return f(y,x)
    elif (y!=0):
        z = f(x,y-1)
        z=z+x
        return z
    else:
        return 0


print(f(10,7))




class UserMainCode(object):
    @classmethod
    def Cards(cls, input1, input2):
        n= input1
        a = input2

        ms = 999
        cs = 0
        for i in range(0,n):
            cs = cs+a[i]
            if(cs < ms):
                ms = cs
            if(cs > 0):
                cs = 0
        return ms















