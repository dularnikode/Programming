
def palindrome(num):
    temp = num
    rev = 0
    while temp != 0:
        rev = (rev * 10) + (temp % 10)
        temp = temp // 10
    
    if num == rev:
        return num
    else:
        return palindrome(num+rev)
print(palindrome(124))
a=input()
b=

