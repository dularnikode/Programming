#include <stdio.h>
void main()
{
int n,m,count,limit;
limit=n+m-1;
int check_list[limit],N_list[n],M_list[m];
int i,j,p,q,z;//for loop increaments

scanf("%d %d",&n,&m);

for (i=0;i<n;i++)
	scanf("%d ",&N_list[i]);
for (j=0;j<m;j++)
	scanf("%d ",&M_list[j]);
for (p=0;p<n;p++)
{	for (q=0;q<m;q++)
		sum=N_list[p] + M_list[q];
		for (z=0;z<limit;z++){
			if sum !=check_list[i];
		}

}

}
