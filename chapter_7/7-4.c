#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int globvar = 5;

int main(void)
{
    pid_t pid;
    int var = 1, i;

    printf("fork is diffirent with vfork\n");

    //pid = fork();
    pid = vfork();
    switch(pid)
    {
        case 0:
            i = 3;
            while(i-- > 0)
            {
                printf("child process is run\n");
                globvar++;
                var++;
                printf("child var = %d\n", var);
                sleep(1);
            }
            printf("child globvar = %d, var = %d\n", globvar, var);
            break;

        case -1:
            perror("parent process failed\n");
            exit(0);

        default:
            i = 5;
            while(i-- > 0)
            {
                printf("parent process is running\n");
                globvar++;
                var++;
                printf(" parent var = %d\n", var);
                system("ps -o pid,ppid,state,tty,command");
                sleep(1);
            }
            printf("parent's globvar = %d, var = %d\n", globvar, var);
            exit(0);
    }
    exit(0);
}