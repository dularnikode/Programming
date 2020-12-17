//
/*Progam to reverse a sentence using recursion*/
//


#include <stdio.h>
void rev_str();
int main()
{
    printf("Enter the senctence");
    rev_str();
    
}
void rev_str()
{
    char ch;
    scanf("%c",&ch);
    if (ch!='\n')
    {
        rev_str();
        printf("%c",ch);
    }
}