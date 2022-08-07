
# r= int(input())
# c= int(input())

# cells = r*c

# if(c==1):
#     print(cells * cells-1)

# else:
#     print()



def Transpose(matrix):

    n = len(matrix)
    m = len(matrix[0])

    ret = []

    for i in range(0, m):
        # print()
        x = []
        for j in range(0, n):
            # print(matrix[j][i], end=" ")
            x.append(matrix[j][i])

        ret.append(x)

    return ret





print(Transpose([[1,2,3], [4,5,6]]))

