from collections import Counter

myNu=[1,9,4,6,6,5,7,4,7,2,6,8,2,3,4,6,9 ]
counts = Counter(myNu)
for i in counts.most_common():
    if i[1]>3:
        print(i[0])



