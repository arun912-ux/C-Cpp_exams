def countTriplets(x,y):
    count= 0

    for i in range(x,y):
        for j in range(i,y):
            sq = pow(i,2) + pow(j,2)
            py = pow(sq, 0.5)
            if(py == int(py) and py <= y):
                # print(i,j,py)
                count+=1



    return count

def main():
    S = input().split()
    X = int(S[0])
    Y = int(S[1])
    print(countTriplets(X, Y))

main()

