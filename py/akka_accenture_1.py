

def ReplaceDiagonal(mat):

    print(mat)

    m = len(mat)
    n = len(mat[0])
    # print(m,n)

    for i in range(0, m):
        for j in range(0, n):
            if i==j:
                print(mat[i][j], end=" ")
                try:
                    sm=0
                    sm = mat[i+1][j+1] + mat[i+1][j] + mat[i][j+1] + mat[i-1][j-1] + mat[i-1][j] + mat[i][j-1] 
                    print(sm)
                except :
                    # e
                    pass


    return ""
    pass

mat = [[1,2,3],
        [4,5,6],
            [7,8,9]]

print(ReplaceDiagonal(mat))















