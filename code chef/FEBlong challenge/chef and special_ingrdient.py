
def Remove(duplicate): 
    final_list = [] 
    for num in duplicate: 
        if num not in final_list: 
            final_list.append(num) 
    return final_list 
for i in range(int(input())):
    dish_no=int(input())
    dish_list=[]
    for i in range(dish_no):
        dish_list.insert(i,str(input()))
    duplicate=[]
    com=[]
    for i in range(dish_no-1):
        flag=len(duplicate)
        check1=dish_list[i]
        com1=list(set(check1))
        check2=dish_list[i+1]
        com2=list(set(check2))
        for m in range(len(com1)):
            for n in range(len(com2)):
                if com1[m]==com2[n]:
                    if flag==0:
                        if com1[m] not in duplicate:
                            duplicate.append(com1[m])
                    else:
                        if com1[m] in duplicate:
                            duplicate.append(com1[m])
        if flag==0:
            break
    com=Remove(duplicate)
    print(len(com))
    
                

        
