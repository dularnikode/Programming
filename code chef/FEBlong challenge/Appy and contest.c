#include <stdio.h>
unsigned long long gcd(unsigned int a,unsigned int b);
unsigned long long lcm(unsigned int a,unsigned int b);
void main()
{
    unsigned long long N,A,B,K,ans;
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
	   scanf("%llu %llu %llu %llu",&N,&A,&B,&K);
        ans=(N/A)+(N/B)-(2*(N/lcm(A,B)));
        if (ans>=K)
            printf("Win");
        else
            printf("Lose");
    }
}

unsigned long long gcd(unsigned int a,unsigned int b)
{
    while(b > 0)
    {
        a=b;
        b=a%b;
        return b;
    }
}
unsigned long long lcm(unsigned int a,unsigned int b)
{
    return a * b / gcd(a,b);
}