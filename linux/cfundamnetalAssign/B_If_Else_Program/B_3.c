#include <stdio.h>
void main()
{
char capital,temp;
printf("Enter the Alphabet to make it small : ");scanf("%c",&capital);
if (capital>=65 && capital<=90)
	temp=capital+32;
else
	printf("The number is already small\n");
printf("The samll number alphabet is %c\n",temp);

}
