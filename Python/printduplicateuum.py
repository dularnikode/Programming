for t in range(int(input())):
    list1=[]
    list2=[]
    size=int(input())
    for k in range(0,size):
        list1.append(int(input()))
    for i in range(0,size):
        count=0
        for j in range(0,size):
            if (i!=j)and (list1[i]==list1[j]):
                count+=1
            else:
                continue
        if count>0:
            list2.append(list1[i])
    print(list2)
            