#include <stdio.h>
void main()
{printf("#**#Find all the even numbers form 1 to N#**#\n");
int num;
printf("Enter the N_th number : ");scanf("%d",&num);
printf("Even numbers from 1 to %d are : ",num);
for (int i=0;i<=num;i++)
	if (i%2==0)
		printf("%d,",i);
printf("\n");
}
