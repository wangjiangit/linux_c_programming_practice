#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
int main(int argc,char *argv[])
{
    struct stat buf;
    if(argc != 2){
        printf("Usage: my_stat <filename>\n");
        exit(0);
    }

    if(stat(argv[1],& buf) == -1){
        perror("stat:");
        exit(1);
    }

    printf("mode:%o\n", buf.st_mode);
    printf("user ID of owner is:%d\n", buf.st_uid);
    printf("group ID of owner is:%d\n", buf.st_gid);

    return 0;
}