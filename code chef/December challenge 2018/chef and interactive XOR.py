for i in range (int(input())):
    listA=[]
    for j in range (int(input())):
        I,J,K,=map(int,input().split())
        print("1",I,J,K)
        A=int(input())
        listA.append(A)
    print("2",*listA)
    output=int(input())
    
