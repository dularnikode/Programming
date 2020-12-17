#include <stdio.h>
int main(int argc,char *argv[])
{
/*printf("the command line argument\n");
printf("%s\n" ,argv[1]);
printf("%s\n" ,argv[2]);*/
printf("the no. of arguments are \n");
printf("%d",argc);
int i;
i = 1;
for (i =1;i<argc;i++)
{printf("%s\n",argv[i]);

}
return 0;
}
