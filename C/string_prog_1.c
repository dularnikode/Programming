//
/*program to find the number of vovles consonents digits spaces*/
//

#include <stdio.h>
int main()
{
    char string[150];
    int vovels=0,consonents=0,digits=0,spaces=0,i=0;
    scanf("%[^\n]",string);
    while(string[i]!='\0')
    {
        if (string[i]=='a' || string[i]=='A' ||string[i]=='e' || string[i]=='E'||string[i]=='i' || string[i]=='I'
        ||string[i]=='o' || string[i]=='O'||string[i]=='u' || string[i]=='U')
        {
            vovels++;
        }
        else if(string[i]>='b' && string[i]<='z' || string[i]>='B' && string[i]<='Z')
        {
            consonents++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else if (string[i]==' ')
        {
            spaces++;
        }
        i++;

    }
    printf("vovels= %d\n",vovels);
    printf("consonents= %d\n",consonents);
    printf("digits=%d\n",digits);
    printf("spaces = %d\n",spaces);
}