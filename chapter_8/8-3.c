#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include <unistd.h>
void assisthread(void* arg)
{
    printf("i ma help to do some jobs\n");
    sleep(3);
    pthread_exit(0);
}

int main()
{
    pthread_t assisthid;
    int status;
    pthread_create(&assisthid,NULL,(void *)assisthread,NULL);
    pthread_join(assisthid,(void*) &status);
    printf("assistthread'exit is caused %d\n",status);
    return 0;
}