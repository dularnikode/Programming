#include <stdio.h>
#include <stdlib.h>
FILE *fp1,*fp2;
char ch;
void DisplayCipher()
{
	while(1)
    {
        ch = fgetc(fp2);
        if(ch == EOF)
        {
            printf("\nEnd Of File\n");
            break;
        }
        else
        {
            printf("%c",ch);
        }
    }
}
