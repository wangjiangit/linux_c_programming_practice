#include<stdio.h>
#include<signal.h>

void handler_sigint(int signo,siginfo_t *siginfo,void *pvoid)
{
    printf("recv SIGINT ,the data value is :%d\n",siginfo->si_int);
}

int main(int argc,char *argv[])
{
    struct sigaction act;

    act.sa_sigaction = handler_sigint;
    act.sa_flags = SA_SIGINFO;

    sigaction(SIGINT,&act,NULL);

    while(1);

    return 0;
}

