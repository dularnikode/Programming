#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,i,output;
        long int K;
       cin>>N>>K;
        long int distance[N];
        for(i=0;i<N;i++){
            cin>>distance[i];
        }

        output=0;
        for(i=0;i<N;i++){
                if(distance[i]%K==0){
                    printf("1");
                }
                else
                {
                    printf("0");
                }
        }

        cout<<endl;
    }

}
