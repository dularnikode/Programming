#include<stdio.h>
#include<conio.h>
struct sym
{
char lab[10];
int val;
};
void main()
{
FILE *f1;
char la[10],op[10],opr[10],a[1000],c,key[10];
int i,j,lc=0,m=0,flag,ch=0;
struct sym s[10];
clrscr();
f1=fopen("a1.txt","r");
c=fgetc(f1);
i=0;
printf ("\n SOURCE PROGRAM \n");
while(c!=EOF)
{
a[i]=c;
c=fgetc(f1);
i++;
}
while(ch<4)
{
 i=0;
while(strcmp(op,"end")!=0)
{
if(a[i]=='\t')
{
strcpy(la," ");
i++;
}
else
{
j=0;
while(a[i] !='\t')
{
la[j]=a[i];
i++;
j++;
}
la[j]='\0';
i++;
}
if(a[i]=='\t')
{
strcpy(op," ");
i++;
}
else
{
j=0;
while(a[i]!='\t')
{
op[j]=a[i];
i++;
j++;
}
op[j]='\0';
i++;
}
if(a[i]=='\t')
{
strcpy(opr," ");
i++;
}
else
{
j=0;
while(a[i]!='\n')
{
opr[j]=a[i];
i++;
j++;
}
opr[j]='\0';
i++;
}
j=0;
if(strcmp(la," ")!=0)
{
strcpy(s[m].lab,la);
if(strcmp(op,"start")==0)
{
lc=atoi(opr);
s[m].val=lc;
m++;
printf("%s\t%s\t%s\n",la,op,opr);
continue;
}
else if(strcmp(op,"equ")==0)
{
s[m].val=atoi(opr);
m++;
}
else if(strcmp(op,"resw")==0)
{
s[m].val=lc;
lc=lc+atoi(opr) *3;
m++;
}
else if(strcmp(op,"resb")==0)
 {
s[m].val=lc;
lc=lc+atoi(opr);
m++;
}
else
{
s[m].val=lc;
lc=lc+3;
m++;
}
}
else
lc=lc+3;
printf("%s\t%s\t%s\n",la,op,opr);
}
}
}
