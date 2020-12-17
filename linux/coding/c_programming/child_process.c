#include <stdio.h>

#include <sys/types.h>


#include<stdlib.h>

void main()
{
pid_t pid;
pid=fork();
if (pid>=0)
{
printf("My Child Process created successfully\n");
}
else
{
printf("Error in Child process creation\n");
}
printf("My Child process is terminated\n");
exit(0);
}
