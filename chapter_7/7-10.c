#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

extern int errno;

int main()
{
    int fd;
    printf("uid study:\n");
    printf("process's uid = %d, euid = %d\n", getuid(), geteuid());
   // setuid(0);
    if((fd = open("test.txt", O_RDWR)) == -1)
    {
        printf("open failure, errno is %d : %s \n", errno, (char *)strerror(errno));
        exit(1);
    }
    else
    {
        printf("open successfully!\n");
    }

    close(fd);
    exit(0);
}