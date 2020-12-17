#include <semaphore.h> //POSIX RT extension
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

sem_t sem;
void *thread (int p)
{
while (1)
{
printf("Thread %d ready\n", p);
sem_wait(&sem);
printf("Thread %d inside C.S.\n", p);
usleep(1000000);
printf("Thread %d leaving C.S.\n", p);
sem_post(&sem);
usleep(1000000);
}
}
int main()
{
pthread_t thr_id;
sem_init(&sem, 0, 1);
pthread_create(&thr_id, NULL, thread, (void *) 1);
pthread_create(&thr_id, NULL, thread, (void *) 6);
usleep(50000000); //simulation time
return 0;
}
