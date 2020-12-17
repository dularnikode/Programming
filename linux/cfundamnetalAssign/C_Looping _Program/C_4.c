#include <stdio.h>
void main()
{printf("#Find ___ number of fibonacci series \n");
int num1=1,num2=1,count=0,num,nth;
printf("Enter the number : ");scanf("%d",&num);
if(num<=0)
	printf("Please enter the positive integer");
if (num==1)
	printf("%d",num2);
else
	printf("Fibonacii sequence upto %d : ",num);
	while(count < num)
	{	printf("%d,",num1);
		nth=num1+num2;
		//update values
		num1=num2;
		num2=nth;
		count+=1;
	}
printf("\n");
}
