#include <stdio.h>
#include <stdlib.h>
FILE *fp1,*fp2;
char ch;
void ConvertCipher()
{
	while(1)
    {
        ch = fgetc(fp1);
        if(ch == EOF)
        {
            printf("\nEnd Of File\n");
            break;
        }
        else
        {
            ch = ch - (8 * 5 - 3);
            fputc(ch, fp2);
        }
    }
}
