#include <stdio.h>

void selsort();

int main()
{
    int n,i=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selsort(arr,n);
    printf("final answer");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("main %d",&n);
    return 0;

}

void selsort(int arr[],int n)
{
    int i=0,j=0,min=0,temp=0,k;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }    
        }
        if(i!=min)
        {
        temp=0;
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        }
        printf("iteration : %d : ",i);    
         for(k=0;k<n;k++)
        {
        printf("%d ",arr[k]);
        }
        printf("\n");
    }

     printf("function %d",&n);
} 

