#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 

int fSubstr(char *str1, char *str2)
{
int n = 0; int m = 0;

int times = 0;
int len = strlen(str2); 
while(str1[n] != '\0')
	{
		if(str1[n] == str2[m])

			{ while(str1[n] == str2[m] && str1[n] !='\0')
			 { n++;
			   m++;
				if(m == len && (str1[n] == ' ' || str1[n] == '\0'))
				{ times++;
				}
			}
			}
			else
			{
				while(str1[n] != ' ')
					{
						n++;

			if(str1[n] == '\0')
			break;
				}

			}n++;

		m=0;

			}
			if(times > 0)
			{
				printf("'%s' appears %d time(s)\n", str2, times);
			}
			else
			{
				printf("'%s' does not appear in the sentence.\n", str2);

 
			}
return(1);

}
