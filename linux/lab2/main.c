#include<stdio.h> 
int fSubstr(char *str1, char*str2);
int fConcat(char *str3, char *str4); 
int fCompare(char *str5,char *str6); 
int fLen(char *str7); 
int main()
{

char str1[100]; 
char str2[100]; 
char str3[100]; 
char str4[100]; 
char str5[100];
char str6[100]; 
char str7[100];

printf("Enetr the main string: ");

scanf("%[^\n]%*c",str1); 
printf("Enetr the substring to search: ");

scanf("%[^\n]%*c",str2); 
fSubstr(str1,str2); 
printf("--------------------------------------------\n");



printf("Enetr the first string to join: "); 
scanf("%[^\n]%*c",str3); 
printf("Enetr the second string to join: ");

scanf("%[^\n]%*c",str4); 
fConcat(str3,str4);

printf("-------------------------------------------\n");


printf("Enetr the first string to compare: "); 
scanf("%[^\n]%*c",str5); 
printf("Enetr the second string to compare: "); 
scanf("%[^\n]%*c",str6); 
fCompare(str5,str6);
 printf("\n--------------------------------------------\n");



printf("Eneter a string to calculate length: "); 
scanf("%[^\n]%*c",str7); 
fLen(str7); 
printf("\n------------------- ----------------------------\n"); 

return(0);

}
