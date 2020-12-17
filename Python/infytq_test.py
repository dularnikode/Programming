for i in range(int(input())):
    num1,num2=map(int,input().split())
    great=0
    if num1>num2:
        great=num1
    else:
        great=num2
    lcm=great
    while(True):

        if (great%num1==0 and great%num2==0):
            lcm=great
            break
        else:
            great=great+1
    print(lcm)
        

