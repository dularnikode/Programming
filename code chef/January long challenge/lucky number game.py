for i in range(int(input())):
    N,bob,alice=map(int,input().split())
    num_list=[]
    #num_list=list(map(int,input().split()))
    num_list=[int(i) for i in input().split()]
    count=0
    a=1
    b=1
    while(a or b != 0):
        length=len(num_list)
        for elem in num_list:
            if elem%bob==0:
                num_list.remove(elem)
                break
        #num_list = [ elem for elem in num_list if elem % bob != 0]
        print("after BOB turn:",num_list)
        b=length-len(num_list)
        if b==0 :
            print("ALICE")
            break
            
        else:
            length=len(num_list)
            for ele in num_list:
                if ele%alice == 0:
                    num_list.remove(ele)
            #num_list = [ ele for ele in num_list if ele %alice !=0]
            print("after Alice turn:",num_list)
            a=length-len(num_list)
            if a==0:
                print("BOB")
                break
            else:
                length=len(num_list)
    
