#include <stdio.h>
void main()
{printf("#Reverse the Number");
int num,que,rem,rev=0,i;
printf("Enter the number : ");scanf("%d",&num);
while(1)

{if (num>0)
     {  rem=num%10;
	num=num/10;
	rev=rev*10+rem;}
 else
	break;

}
printf("Reverse Number is : %d\n",rev);
}
