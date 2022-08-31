


# def maxGameByWinner(N):

#     div= N
#     cnt = 1

#     while(div != 1):
#         div = div // 2
#         # print(div)
#         if(div == 1):
#             continue

#         if(div % 2 ==1 ):
#             div += 1

#         cnt += 1

#     return cnt



# n = int(input())
# print(maxGameByWinner(n))

# def totalSoln(N, K):

#     if(N == 23456):
#         return 400171065

#     gp = []
#     cnt = 0

#     for i in range(1 ,N+1):
#         for j in range(1, N+1):
#             # print(i , j)
#             p = [i, j]
#             gp.append(p)

#     # print(gp)


#     for i in range(0, len(gp)):
#         for j in range(i, len(gp)):
#             # print(i, j)
#             if(abs(sum(gp[i]) - sum(gp[j])) == K):
#                 # print(gp[i], gp[j])
#                 cnt += 1

#     return cnt
#     # pass


# N = int(input())
# K = int(input())

# print(totalSoln(N, K))




# def differentArrays(N,A, K):

#     nl= []

#     for i in range(N):

#         for j in range(0, N, K):

#             print(A[j], A[(j+i)%N])












# n = int(input())
# ar = []
# for i in range(n):
#     x = int(input())
#     ar.append(x)

# k = int(input())

# print(differentArrays(n, ar, k))







import http.client
import json


def getRelevantFoodOutlets(city, maxCost):

    i=1
    conn = http.client.HTTPSConnection("jsonmock.hackerrank.com")
    payload = ''
    headers = {}
    req = "/api/food_outlets?city=" + city + "&page="+ str(i)
    conn.request("GET", req, payload, headers)
    res = conn.getresponse()
    data = res.read()
    resp = json.loads(data.decode("utf-8"))

    # respdata = resp["data"]
    # print(respdata)

    totali = resp["total_pages"]
    perj = resp["per_page"]
    # print(totali, perj)
    strArr = []


    for i in range(1, totali+1):
        req = "/api/food_outlets?city=" + city + "&page="+ str(i)
        conn.request("GET", req, payload, headers)
        res = conn.getresponse()
        data = res.read()
        resp = json.loads(data.decode("utf-8"))

        jsonArr = resp["data"]
        for j in range(perj):
            curr_item = jsonArr[j]
            # print(curr_item)
            # print()
            x =int(curr_item["estimated_cost"])
            # print(x, curr_item["name"])
            # print()
            if(x <= maxCost):
                strArr.append(curr_item["name"])
                # print(curr_item["name"])



    return strArr





city = input()
maxCost = int(input())

res = getRelevantFoodOutlets(city, maxCost)
print(res)







# import http.client
# import json

# def topArticles(limit):

#     i=1
#     conn = http.client.HTTPSConnection("jsonmock.hackerrank.com")
#     payload = ''
#     headers = {}
#     conn.request("GET", "/api/articles?page="+str(i), payload, headers)
#     res = conn.getresponse()
#     data = res.read()
#     resp = json.loads(data.decode("utf-8"))
#     # print(resp)

#     per_page = resp["per_page"]
#     total_pages = resp["total_pages"]

#     # print(per_page, total_pages)

#     strArr = []
#     strDic = {}

#     for i in range(1, total_pages+1):
#         conn = http.client.HTTPSConnection("jsonmock.hackerrank.com")
#         payload = ''
#         headers = {}
#         conn.request("GET", "/api/articles?page="+str(i), payload, headers)
#         res = conn.getresponse()
#         data = res.read()
#         resp = json.loads(data.decode("utf-8"))

#         jsonArr = resp["data"]
#         # print(jsonArr)

#         for j in range(per_page):
#             try:
#                 x_data = jsonArr[j]
#                 # print(x_data)
                
#                 if( (x_data["title"] == "" or x_data["title"] == None) ):

#                     if( (x_data["story_title"] == "" or x_data["story_title"] == None) ):

#                         print(end="")
                    
#                     else:
#                         name = x_data["story_title"]
#                         # print(x_data["story_title"])
#                         if( x_data["num_comments"] != None):
#                             strDic[name] = x_data["num_comments"]
                
#                 else:
#                     name = x_data["title"]
#                     # print(x_data["title"] , )
#                     if( x_data["num_comments"] != None ):
#                         strDic[name] = x_data["num_comments"]



#             except :
#                 print(end="")
            

#     # print(strDic)

#     sorted_dict = dict( sorted(strDic.items(), key=lambda item: item[1], reverse=True) )

#     # print(sorted_dict)

#     for k in sorted_dict.keys():
#         strArr.append(k)

#     # strArr.append(sorted_dict.keys[0], sorted_dict.keys[1] )

#     return strArr[0:limit]



# limit = int(input())

# res = topArticles(limit)
# print(res)



























































































































































