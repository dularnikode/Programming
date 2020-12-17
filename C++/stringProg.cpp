#include <iostream>
#include <string>
using namespace std;



int main(){
    // string my_color;
    // cout<<"Enter my favourite color \n";
    // getline(cin,my_color);
    // cout<<"Your favoutire color: "<<my_color<<" is my favourite too";
    string firstName;
    string lastName;
    cout<<"Enter first name :";
    getline(cin,firstName);
    cout<<"Enter last name : ";
    getline(cin,lastName);

    cout<<"Welcome! "<<firstName<<" "<<lastName;
    
    return 0;
}

