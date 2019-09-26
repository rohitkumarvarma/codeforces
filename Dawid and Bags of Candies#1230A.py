#Dawid has four bags of candies. The i-th of them contains ai candies.
#Also, Dawid has two friends. He wants to give each bag to one of his two friends.
#Is it possible to distribute the bags in such a way that each friend receives the same amount of candies in total?
bags = []
for i in range (4):
    candies=int(input(" "))
    bags.append(candies)

if(bags[0]+bags[1] == bags[2]+bags[3]):
    print("yes")
elif(bags[0]+bags[2] == bags[1]+bags[3]):
    print("yes")
elif(bags[0]+bags[3] == bags[1]+bags[2]):
    print("yes")
elif(bags[1]+bags[2] == bags[0]+bags[3]):
    print("yes")
elif(bags[1]+bags[3] == bags[0]+bags[2]):
    print("yes")
elif(bags[2]+bags[3] == bags[0]+bags[1]):
    print("yes")
else:
    print("no")


