#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin>>t;
	while(t--)
   {
   	long long int pc,pr;
   	cin>>pc>>pr;
   	long long int movC=ceil((double)pc/9.0);
   	long long int movR=ceil((double)pr/9.0);
   	if(movR<=movC)
   	cout<<"1 "<<movR<<"\n";
   	else
   	cout<<"0 "<<movC<<"\n";
   }
}
