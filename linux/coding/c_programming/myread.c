#include <stdio.h>

void myread(void);


void myread(void)

{
FILE *fp;
fp = fopen("f1.txt","r");

char ch;

while (ch!=EOF){

ch=fgetc(fp);

}

}
