def gcd(a,b):
    while b > 0:
        a, b = b, a % b
    return a
    
def lcm(a, b):
    return a * b / gcd(a, b)
for i in range(int(input())):
    N,A,B,K=map(int,input().split())
    count=(N/A) + (N/B) - 2*(N/lcm(A,B))
    ans = int(count)
    #print(ans
    if (ans>=K):
        print('Win')
    else:
        print('Lose')
         
            
