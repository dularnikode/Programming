/*
#include <stdio.h>
int main()
{
int i,j,n,k=2;
char h;
h='*';

for(i=1;i<=3;i++)
{
    for(k=0;k<2;k++){
    for(j=1;j<=6;j++)
    {
        if((j>=4-i) && (j<=i+3))
        {
        
            printf("%c",h);
            
            
        }
        else
        {
            printf(" ");
        }
          

    }
    printf("\n");
    }
}
return 0;
}

*/
#include<stdio.h>
int main()
{
int n,i,j,count=2,incre=1;
n=n*2;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if((j%2!=0)&&(j<i+count))
        {
            printf("%d",incre);
        }
        if((j%2==0)&&(j<i*2))
        {
            printf("*");
        }
    }
    count+=1;
    incre+=1;
    printf("\n");
}
return 0;
}