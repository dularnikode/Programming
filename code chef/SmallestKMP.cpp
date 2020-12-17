// program to convert string X to string Y which minimum number of changes.
#include <bits/stdc++.h>
using namespace std;

#define MAX 26

void printAnagramAndChanges(string X, string Y)
{
     cout<<"String : "<<X<<" ,pattern: "<<Y<<"\n";
	int countx[MAX] = {0}, county[MAX] = {0},
		ctrx[MAX] = {0}, ctry[MAX] = {0};

	int change = 0;
	int l = X.length();
	for (int i = 0; i < l; i++) {
		countx[X[i] - 'A']++;
		county[Y[i] - 'A']++;
	}
	for (int i = 0; i < MAX; i++) {
		if (countx[i] > county[i])
			ctrx[i] += (countx[i] - county[i]);
		else if (countx[i] < county[i])
			ctry[i] += (county[i] - countx[i]);
		change += abs(county[i] - countx[i]);
	}

	for (int i = 0; i < l; i++) {
		if (ctrx[X[i] - 'A'] == 0)
			continue;

		int j;
		for (j = 0; j < MAX; j++)
			if ((ctry[j]) > 0)
				break;

		if (countx[X[i] - 'A'] == ctrx[X[i] - 'A']
			|| X[i] - 'A' > j) {

			countx[X[i] - 'A']--;
			ctrx[X[i] - 'A']--;
			ctry[j]--;
			X[i] = 'A' + j;
		}
		else
			countx[X[i] - 'A']--;
	}

	cout<<X<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
        string S,P;
        cin>>S;
        cin>>P;
        cout<<"String : "<<S<<" ,pattern: "<<P<<"\n";
        printAnagramAndChanges(S,P);
	}
}
