#include<iostream>
#include<stdio.h>
#include<cstdio>
using namespace std;
int main()
{
    int life;
    life =4;

    int card=40;

    int *myptr;
    myptr=&card;//memeory address saved into myptr
    
    card=*myptr;//pointer dereference | value at address of myptr is assigned to card


    printf("value of my cards is : %d \n",card);
    printf("value of my pointer is : %p \n",myptr);
    return 0;

}