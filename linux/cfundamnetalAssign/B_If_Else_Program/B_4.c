#include <stdio.h>
void main()
{int a,b,c;
printf("Enter the number A = ");scanf("%d",&a);
printf("Enter the number B = ");scanf("%d",&b);
printf("Enter the number C = ");scanf("%d",&c);
if (a>b && a>c)
	printf("Number A= %d is largest\n",a);
if(b>c && b>a)
	printf("NUmber B= %d is largest\n",b);
if (c>a && c>b)
	printf("Number C= %d is largest\n",c);
}
