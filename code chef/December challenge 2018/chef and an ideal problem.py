import random
X=random.randint(1,3)
print(X)
Y=int(input())
if X != Y :
    if X==1 and Y==2 :
        Z=X+Y
    if X==1 and Y==3 :
        Z=Y-X
    if X==2 and Y==3 :
        Z=Y-X
    if X==2 and Y==1 :
        Z=X+Y
    if X==3 and Y==1 :
        Z=X-Y
    if X==3 and Y==2 :
        Z=X-Y
print(Z)
