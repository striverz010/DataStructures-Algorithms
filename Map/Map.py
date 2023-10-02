arr=[1,1,2,2,3,4,4,5,6,7]

#declaring the map for elements
mpp={}
for item in arr:
    
    #checking whether the element is there in map
    if(item in mpp):
        mpp[item]+=1
    
    #if the element is not there in map
    else:
        mpp[item]=1

for key,value in mpp.items():

    print(key,value)

