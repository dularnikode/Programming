#include<iostream>
#include<string>
using namespace std;

int main(){

    int number;//variable decleration
    number=0;//varibale initialization
    string myColour;
    cout<<"Enter your favourite Colour";
    getline(cin,myColour);
    cout<<"hey "<<myColour<<" is my favourite too"<<endl;
    printf("Enter a number :- ");
    cin>>number;
    cout<<"Your id is : "<<number<<endl;
    return 0;
    cout<<"Hello after return 0; \n";
}

/*Identifiers*/

//uppercase and lowercase letters: timTimmmy,timtimmy;
//dont start number at start use it in middle or at end
//we can use underscore 
//conflicts with reserved keywords like int,friend,if,inline
//don't go beyond 31 characters
//_ "underscore" at the start means private
//__ means system keyword

