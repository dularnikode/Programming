
#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int H;
        int P;
        cin>>H>>P;
        while(P!=0 && H!=0){
            H=H-P;
            P=P/2;
        }

        if(H<=0){
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        cout<<"\n";
    }

}
