#include <stdio.h>
/*
//input 3 4 ;
//output :
3
44
555
6666
555
44
3
//

#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int i,j,k,count=0;
    count=1;
    j=x+y;
    for(i=x;i<j;i++)
    {
        for(k=count;k>0;k--){
        printf("%d",i);
        }
        printf("\n");
        count+=1;
    }
    count=y-1;
    j=x+y-2;
    for(k=j;k>=x;k--)
    {
        for(j=count;j>0;j--)
        {
            printf("%d",k);
        }
        printf("\n");
        count-=1;
    }
    return 0;
}
*/

int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i;
        while(m--)
        {
            printf("%d",i);
            if(i!=1 && m!=1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    i=i-1;
    for(j=i;j>=1;j--)
    {
        m=j;
        while(m--)
        {
            printf("%d",j);
            if(m>1)
            {
                if(i==1)
                {break;}
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;
}