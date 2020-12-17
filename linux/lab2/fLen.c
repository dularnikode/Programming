#include<stdio.h> 
int fLen(char *str);
int fLen(char *str)
{
int i,n=0; 
for(i=0;str[i]!='\0';i++)

{ 
	n++;
}
printf("\nLength of a string:%d",n);
return(4);
}