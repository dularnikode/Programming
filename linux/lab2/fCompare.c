#include<stdio.h>
#include<string.h> 
int fCompare(char *str5, char *str6)
{
int n; 
n=strncmp(str5,str6,2); 
if(n==0)
{
	printf("\nEnterd Strings are equal");
}
else
{
	printf("\nEntered Strings are not equal");
}
return(3);
}
