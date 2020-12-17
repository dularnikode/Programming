for t in range(int(input())):
    N=int(input())
    if N%4!=0:
        ans=[]
        for i in range(1,N+1):
            print(1,i,i,i)
            ans.append(int(input()))
            if ans[-1]==-1:
                break
        print(2,*ans)
        op=input()
