//code:112A
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char charr1[100];
    char charr2[100];
    cin>>charr1;
    cin>>charr2;
    int len=strlen(charr1);
    int a,b,check=0;
    for(int i=0;i<len;i++)
    {
        a=charr1[i];
        b=charr2[i];
        if(b>=65 && b<=90)
        {
            /*
            if((a-b)==32)
            {
                cout<<charr1[i]<<":"<<charr2[i];
                check=0;
            }
            */
            if((a-b)>32)
            {
                check=1;
                //cout<<charr1[i]<<":"<<charr2[i]<<":"<<check;
            }
            else if((a-b)<32)
            {
                
                check=-1;
                //cout<<charr1[i]<<":"<<charr2[i]<<":"<<check;
            }
        }
        else
        {
            /*
            if((a-b)==0)
            {
                //cout<<charr1[i]<<":"<<charr2[i];
                check=0;
            }*/

            if((a-b)>0)
            {              
                
                check=1;
               // cout<<charr1[i]<<":"<<charr2[i]<<":"<<check;
            }
            else if((a-b)<0)
            {
                check=-1;
                //cout<<charr1[i]<<":"<<charr2[i]<<":"<<check;
            }   
        }
        
    }
    cout<<check;
    return 0;
}