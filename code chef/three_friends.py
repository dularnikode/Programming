for t in range(int(input())):
    a,b,c = map(int,input().split())
    x=abs(a-b)
    y=abs(b-c)
    z=abs(c-a)
    print(x,y,z)
    if x>=0 and y>=0 and z>=0:
        print("yes")
    else:
        print("no")
