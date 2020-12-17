
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		string s1,s2,s;
		cin>>s1>>s2;
		ll n=s1.size(),m=s2.size();
		ll alp[27];memset(alp,0,sizeof(alp));
        ll al1[27];
		for(int i=0;i<n;i++)
		{
			alp[s1[i]-'a']++;

		}
		for(int i=0;i<m;i++)
		{
			alp[s2[i]-'a']--;
		}
		for(int i=0;i<26;i++)
		al1[i]=alp[i];

		for(int i=0;i<=(s2[0]-'a');i++)
		{
			while(alp[i]>0)
			{
				s+=(char)(i+97);
				alp[i]--;

			}

		}


		s+=s2;
		for(int i=0;i<26;i++)
		{
			while(alp[i]>0)
			{
				s+=(char)(i+97);
				alp[i]--;
			}
		}
		string sf;
		for(int i=0;i<s2[0]-'a';i++)
		{
			while(al1[i]!=0)
			{
				sf+=(char)(i+97);
				al1[i]--;
			}
		}
		sf+=s2;
		for(int i=0;i<26;i++)
		{
			while(al1[i]!=0)
			{
				sf+=(char)(i+97);
				al1[i]--;
			}
		}
		cout<<min(s,sf)<<"\n";
	}
}
