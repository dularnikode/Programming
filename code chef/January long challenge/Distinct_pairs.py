

































































































































































































































































































































































































n,m=map(int,input().split())
check_list=[]
limit=n+m-1
count=0
N_list = [int(i) for i in input().split()]
M_list = [int(j) for j in input().split()]
for k in range(n):
    for l in range (m):
        sum=N_list[k] + M_list[l]
        if sum not in check_list:
            print(k, l)
            check_list.append(sum)
            count=count+1
    if count==limit:
        break