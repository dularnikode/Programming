#include <stdio.h>
void main()
{
int a,b,temp;
printf("Enter the first number A = ");
scanf("%d",&a);
printf("Enter the second number B = ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("First number A= %d and second number B= %d\n",a,b);

}
