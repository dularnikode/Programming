#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a;
    int64_t result;
    cin>>n>>m>>a;
    result=((n+a-1)/a)*((m+a-1)/a);
    cout<<result;
    return 0;
}