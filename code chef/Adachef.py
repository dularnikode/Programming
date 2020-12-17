for t in range(int(input())):
    n,m,r,c,k = map(int, input().split())
    count= 0
    #save the row encountered and cloumn encountered
    rlist=[]
    clist=[]
    p=1
    q=1
    for i in range(0,k+1):
        for ra in range (1,n+1):
            for ca in range (1,m+1):
                if (r+c==ra+ca) or (r-c==ra-ca):
                    count=count+1
                    rlist.append(ra)
                    clist.append(ca)
                    print("row is :%d and cloumn :%d and count is %d",ra,ca,count)
        rlist.remove(rlist[0])
        clist.remove(clist[0])
        print(rlist)
        print(clist)
        r=rlist[p]
        c=clist[q]
        p=p+1
        q=q+1
    count= count-1
print("the last c count is ",count)
