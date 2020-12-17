#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int pro[n][3];
    int i=0;
    int j=0;
    int count=0;
    int ans=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>pro[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<3;j++)
        {
            if(pro[i][j]==1)
            {
                count+=1;
            }
            
        }
        if(count>=2)
        {
            ans+=1;
        }
    }

    cout<<ans;
    return 0;
}