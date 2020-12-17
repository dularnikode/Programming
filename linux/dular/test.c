#include <stdio.h>
int main()
{
	char str[50] = {'\n'};
	File *fp;
	clrscr();
	fflwh(fp);
	fp  = fopen("D:\linux\dular\d1.txt","r");
	if (fp == NULL)
	printf("\n Unable to open file");
	fread(str,12,12,fp);
	fclose(fp);
	printf("\n contents of the file are");
	printf("\n%s",str);
	return 0;
	//getch();
}
