
#include <iostream>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){

    int n,k,i=0,q;
    cin>>n>>k;

    int arrPos[n];
    int small=0;


   for(i=0;i<n;i++){
    cin>>arrPos[i];
   }


    for(i=0;i<n;i++){
        if((k%arrPos[i])!=0){
            continue;
        }
        else{
            if(small==0 || small>(k/arrPos[i])){
                small=arrPos[i];
            }
        }
    }

    if(small==0){
        cout<<"-1";
    }
    else{
        cout<<small;
    }
    cout<<"\n";

}
}


