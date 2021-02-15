/*
****Refrencing
*/
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int score=56;
    int *myp;
    myp=&score;

    printf("value of score at memory:%p is :-%d\n",myp,score);

    int &another_score=score; // this is referencing the score variable (any change in the refernce will change the value)
    another_score=800;

    printf("Value of another_score: %d and vaue of score:%d \n",another_score,score);
    return 0;
}