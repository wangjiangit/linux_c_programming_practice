
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>

int main(int argc,char *argv[])
{
    union sigval value;
    int   signum = SIGTERM;
    pid_t pid;
    int   i;

    value.sival_int = 0;

    for(i = 1;i < argc;i++)
    {
        if(!strcmp(argv[i],"-d"))
        {
            value.sival_int = atoi(argv[i+1]);
            continue;
        }
        if(!strcmp(argv[i],"-s"))
        {
            signum = atoi(argv[i+1]);
            continue;
        }
        if(!strcmp(argv[i],"-p"))
        {
            pid = atoi(argv[i+1]);
            continue;
        }
    }

    if(sigqueue(pid,signum,value) < 0)  //sigqueue函数只能向指定进程发送信号且可携带数据
    {
        perror("sigqueue");
        exit(1);
    }

    return 0;
}

