#include <iostream>
using namespace std;

int maxx(int arr[],int n){
    int i=0,max=0;
    for(i=0;i<n;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    //cout<<"maximum:"<<arr[max]<<" index :"<<max<<"\n";
    return max;
}

bool checkAllTrue(int arr[],int n){
    //cout<<"called \n";
    bool check;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            check=true;
            //cout<<"inside if\n";
        }else{
            check=false;
            //cout<<"Inside else \n";
            break;
        }
    }
    return check;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i,maxi,count=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];    
	    }
	   
	    if(checkAllTrue(arr,n)){
	        cout<<count<<"\n";
	    }else{
	        while(!checkAllTrue(arr,n)){
	            maxi=maxx(arr,n);
	            for(i=0;i<n;i++){
	                if(i!=maxi){
	                    arr[i]=arr[i]+1;
	                }
	            }
	            count++;
	        }
	        cout<<count<<"\n";
	    }
	}
	return 0;
}

