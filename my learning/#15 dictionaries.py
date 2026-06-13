#dictionaries in python

dic ={
    "elon":"intelligent",
    "rajveer":"more intelligent",
    "pushpa":"GK"
    }

print(dic["elon"])  #meathod 1
print(dic.get("pushpa"))  #meathod 2

#to get keys
print(dic.keys())

#to get values
print(dic.values())

#other meathod to get key

for key in dic:
    print(key)

for key,values in dic.items():
    print(f"The {key} is {values}")
    