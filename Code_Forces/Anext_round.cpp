#include <cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    k--;
    cout<<k<<endl;
    int score[n];
    int i,count=0;
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
    for(i=0;i<n;i++)
    {
        if((score[i]>=score[k]) && (score[i]>0))
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}