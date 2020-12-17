#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        int totalscore;
        int max;
        int problem[n][2];
        int dist[n][2]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>problem[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
            }
            if(check(problem[i][0])
            {
                if(problem[i][1]>dist[i][1])
                {
                    dist[i][1]=problem[i][1];
                }
            }
            
            }
        }
        

    }
}