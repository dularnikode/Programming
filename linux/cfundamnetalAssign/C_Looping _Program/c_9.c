#include <stdio.h>
void main()
{printf("Find the number is prime or not \n");
int num,i;
printf("Enter the number : ");scanf("%d",&num);
if (num > 1){
	for (i=2;i<=num+1;i++){
		if (num % i == 0){
			printf("%d is not a prime number\n",num);
			break;
		}
		else{
			printf("%d is a prime number\n",num);
			break;
		}
				}
	    }
else
	printf("%d is not a prime  number\n",num);
}
