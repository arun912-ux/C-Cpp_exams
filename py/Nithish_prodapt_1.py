

import re

def howMany(sentence):
    
    count=0
    ls = sentence.split()
    # print(ls)
    for i in ls:
        
        x = re.search("[a-z]+[A-Z]*[^,\[\]]", i)
        if not x==None:
            count+=1


    return count


s = input();
print(howMany(s))

