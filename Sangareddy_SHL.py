

def smalleestStockPrice(stock, valueK):

    stock.sort()

    return stock[valueK-1]


def isSameReflection(word1, word2):

    li = []
    for i in range(0, len(word1)):
        tmp = word1[i : ] + word1[0 : i]
        li.append(tmp)

    if word2 in li:
        return 1
    else:
        return -1



# arr = []
# arr = input().split(" ")
# arr = list(map(int, arr))

# k = int(input())

S1 = input()
S2 = input()

# print(smalleestStockPrice(arr, k))
print(isSameReflection(S1, S2))

