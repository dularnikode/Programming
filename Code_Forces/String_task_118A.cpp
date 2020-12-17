#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void compare(char ch);
int main()
{
    string st;
    getline(cin,st);
    int len=st.size();
    int i;
    for(i=0;i<len;i++)
    {
        compare(st[i]);
        
    }
    
}

void compare(char ch)
{
    if(ch=='A' || ch=='O' || ch=='Y' || ch=='E' || ch=='U' || ch=='I' || ch=='a' || ch=='o' || ch=='y' || ch=='e' || ch=='u' || ch=='i' )
    {
    }
    else{
        if(ch>='A' && ch<='Z')
        {
            ch+=32;
        }
        cout<<"."<<ch;
    }
}