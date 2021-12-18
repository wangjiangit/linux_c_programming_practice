#include <stdio.h>
#include <signal.h>
#include <unistd.h>

#define  UNHAPPEN 0 //  未发送
#define HAPPENED 1  // 已发生

int  flag_happen;

void hander_sigint(int signo){
    flag_happen=HAPPENED;
}

int main(){
    if(signal(SIGINT,hander_sigint)==SIG_ERR){
        perror("signal");
        exit(1);
    }

    while(flag_happen == UNHAPPEN){  //存在一个潜在bug，当信号发生在while之后pasue之前，程序将检测不到事件发生，此时执行信号处理函数，flag_happen
        //被修改未HAPPENED,之后调用pause，程序将一直处于挂起状态,那么进程将无法检测此次事件的发起
        pause();
    }
    printf("after event happened\n");

}