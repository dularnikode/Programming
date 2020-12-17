#include <stdio.h>
#include <stdlib.h>
//function prototype
void ReadSrc();
void ConvertCipher();
void DisplayCipher();
//global variables
FILE *fp1,*fp2;
char ch;
void main()
{
	ReadSrc();
	ConvertCipher();
	DisplayCipher();
	//fclose(fp1);
    	//fclose(fp2);
}
