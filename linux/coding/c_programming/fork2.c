#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
pid_t pid,pid1,pid2,pid3;
pid=fork();
if (pid==-1){
	printf("ERROR IN PROCESS CREATION\n");
	exit(1);
	     }
if (pid!=0){
	pid1=getpid();
	printf("\n The parent process ID is %d\n",pid1);
	   }
else{
	pid2=getpid();
	printf("\n The child process ID 1 is %d \n",pid2);
}
pid3=fork();
if (pid3==0){
	pid2=getpid();
	printf("\n The child process ID 2 is %d\n",pid3);
}
}

