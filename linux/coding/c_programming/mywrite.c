#include <stdio.h>

//void main()

void mywrite(void);

void mywrite(void)

{

FILE *fp1;
fp1=fopen("f2.txt","a+");

fputs("wishes are good",fp1);


}
