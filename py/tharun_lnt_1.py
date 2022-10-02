



from operator import xor


def dictWords(textInput):

    textInput = [x for x in textInput.split()]

    ret = []

    dic = {}

    for w in textInput:
        if(w in dic):
            dic[w] += 1
            # ret.append(w)
        else:
            dic[w] = 1

    for k,v in dic.items():
        if(v>1):
            ret.append(k)

    ret.sort()

    if len(ret) == 0:
        return "NA"
    
    print(1 ^ 1)
    return ret








# ar = [x for x in input().split()]
# print(ar)
result = dictWords(input())
print(" ".join([str(res) for res in result]))

