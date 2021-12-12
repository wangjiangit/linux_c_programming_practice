#include<stdio.h>
#include<signal.h>

void hander_sigint(int signo)
{
    printf("recv SIGINT\n");
    printf("接受到的型号值:%d",signo);
}


int main(int argc, char *argv[])
{
    signal(SIGINT,hander_sigint);   //signal函数是一个异步模型，当有信号来时，signal才会检测到，此时忽略用户按下的ctrl+c组合

    while(1)
        ;
    return 0;
}

