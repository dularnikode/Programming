for i in range(int(input())):
    n,k = map(int,input().split())
    list1=list(map(int,input().split()))
    count=0
    list1.sort()
    for i in range(n):
        list.insert(i,k)
        if list[i] <=k:
            count =count+1
            
