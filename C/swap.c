#include<stdio.h>
int sumofele(long int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]*(i+1);
    }
    return sum;
}

int main()
{
    int t=0;
    scanf("%d",&t);
    while(t--){
        long int n=0;
        scanf("%ld",&n);
        long int arr[n];
        for(int i=0;i<n;i++){
            scanf("%ld",&arr[i]);
        }
        int temp=0,maxprod=0,newprod=0;
        maxprod=sumofele(arr,n);
        for(int i=0;i<n-1;i++){
            printf("\n%ld",maxprod);
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            //print arr
            for(int i=0;i<n;i++){
                printf("%ld ",arr[i]);
                printf("\n");
            }
            //arr
            newprod=sumofele(arr,n);
            if (newprod>maxprod){
                maxprod=newprod;
            }
            temp=0;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            //print arr
            for(int i=0;i<n;i++){
                printf("%ld ",arr[i]);
                printf("\n");
            }
            //arr
        }
        printf("%ld\n",maxprod);
    }
    return 0;
}

