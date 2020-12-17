#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int count=0,i,j;
    char players[101];
    cin>>players;
    int len=strlen(players);
    int pre=0,next=0;
    for(i=0;i<len-1;i++)
    {
        if(count==6)
            {
                break;
                //printf("after brak %d",count);
            }
        pre=players[i];
        next=players[i+1];
        if (pre==next)
        {
            count+=1;
            
        }
        else
        {
            count=0;
        }
        
    }
    if(count==6)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}