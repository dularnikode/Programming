for i in range(int(input())):
    str1=str(input())
    str2="not"
    count=0
    a=str1.split(" ")
    for i in range(0,len(a)):
        if (str2==a[i]):
            count=count+1
    if (count >= 1):
        print("Real Fancy")
    else:
        print("regularly fancy")


    
