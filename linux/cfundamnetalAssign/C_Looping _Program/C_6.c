#include <stdio.h>
void main()
{printf("\n#**#Factoril of Number#**#\n");
int num,i,fact=1;
printf("Enter the Number : ");scanf("%d",&num);
for (i=1;i<=num;++i)
{
	fact*=i;
}
printf("Factorial of %d is %d\n",num,fact);
}
