#include <stdio.h>
#include <stdlib.h>
FILE *fp1,*fp2;
char ch;
void ReadSrc()
{
    
    fp1 = fopen("input_test.txt","r+");
    if(fp1 == NULL)
    {
        printf("Source File Could Not Be Found\n");
    }
    fp2 = fopen("output_test.txt","w+");
    if(fp2 == NULL)
    {
        printf("Target File Could Not Be Found\n");
    }
}