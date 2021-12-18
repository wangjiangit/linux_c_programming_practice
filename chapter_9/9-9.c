#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void my_err(const char *err_string,int line){
    fprintf(stderr,"line:%d",line);
    perror(err_string);
    exit(1);
}
void handler_sigint(int signo)
{
    printf("recv SIGINT\n");
}

int main(int argc,char *argv[])
{
    sigset_t   newmask,oldmask,zeromask;

    if (signal(SIGINT,handler_sigint)==SIG_ERR){
        my_err("signal",__LINE__);
    }

    sigemptyset(&newmask);
    sigemptyset(&zeromask);
    sigaddset(&newmask,SIGINT);

    if(sigprocmask(SIG_BLOCK,&newmask,&oldmask)<0){  //屏蔽SIGINT
        my_err("sigprocmask",__LINE__);
    }else{
        printf("SIGINT block\n");
    }

   if( sigsuspend(&zeromask) !=-1){ //取消所有信号的屏蔽并等待型号处理函数处理完，之后将信号屏蔽码恢复成原来的
       my_err("sigsuspend",__LINE__);   //sigsuspend 总是返回-1
   }else{
       printf("recv a signo,return from sigsuspend\n");
   }

    if(sigprocmask(SIG_SETMASK,&oldmask,NULL)<0){
        my_err("sigprocmask",__LINE__);
    }
    while(1);

    return 0;

}


