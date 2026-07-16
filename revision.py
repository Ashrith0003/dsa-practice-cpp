# thisdict = {
#     "brand" :"Ford",
#     "Theegala" : "Ashrith",
#     "Aerolla" : "Arnold",
#     "Theegala" : "srinivas"
# }

# thisdict = dict(name = "Ashrith",age =36,country = "Norway")
# print(thisdict)
# # print(thisdict["brand"])
# # print(len(thisdict))
# # print(type(thisdict))

# x = thisdict["name"]
# print(x)
# y = thisdict.get("name")
# z = thisdict.keys()
# print(z)

# car =dict(brand = "ford" , model = "Mustang", year = 1964)

# x = car.keys()
# car["color"] = "balck"
# print(x)
# y = car.values()
# print(y)
# z = car.items()
# print(z)

# if "model" in car:
#     print("yes, model is one the key in the car disct")
# car.update({"model" : "ashrith"})
# print(car)
# car.pop("model")
# print(car)
# car.popitem()
# print(car)
# car.clear()
# print(car)
# for x in car:
#     print(x,car[x])
# for y in car.values():
#     print(y)

# mycars = car.copy()
# print(mycars)
# mycars1 = dict(car)
# print(mycars1)

myfamily = {
    "child1" : {
        "name" : "Ashrith",
        "year" : 2008
    },
    "child2" : {
        "name ": "rakesh",
        "year" : 1996
    },
    "child3" : {
    "name" : "Linus",
    "year" : 2011
  }
}

# print(myfamily["child1"]["name"])
# print(myfamily["child1"]["year"])

for x,obj in myfamily.items():
    print(x)

    for y in obj:
        print(y + ':',obj[y])