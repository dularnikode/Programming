import random
for i in range (int(input())):
    N=int(input())
    Mbalist=[i+1 for i in range(N)]
    print(Mbalist)
    Q=N+3
    for j in range (Q):
        quelist=random.sample(range(1,N+1),5)
        quelist.sort()     
        print("?",*quelist)
        third,fourth=map(int,input().split())
        for k in range(len(Mbalist)-1):
            if Mbalist[k]==fourth:
                del Mbalist[0:k+1]
                
    print("!",Mbalist[-1])
        
        
    
    
