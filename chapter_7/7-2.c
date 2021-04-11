#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
    pid_t pid;
    int k;
    char * msg;

    pid = fork();
    switch(pid)
    {
        case 0:
            msg = "child process is run!";
            k = 3;
            break;

        case -1:
            perror("process creation failed:");
            break;

        default:
            msg = "parent process is run!";
            k = 5;
            break;
    }

    while(k > 0)
    {
        puts(msg);
        sleep(1);
        k--;
    }
}