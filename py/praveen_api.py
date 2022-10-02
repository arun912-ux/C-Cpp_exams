# import http.client
# import json

# conn = http.client.HTTPSConnection("jsonmock.hackerrank.com")
# payload = ''
# headers = {}
# conn.request("GET", "/api/medical_records", payload, headers)
# res = conn.getresponse()
# data = res.read()
# d = json.loads(data.decode("utf-8"))
# print(d)
# d=data

# print(d["per_page"])




a = [1,2,3,4]
# b = [11,21,31,41]
b = "str"
# a.append(b)
a.extend(b)
print(a)











