#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    int fd;
    if (fd = open("example_62.c", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR) == -1) {
        // if (( fd=creat("example_62.c",S_IRWXU)==-1){
        perror("open");
    } else {
        printf("create file success\n");
    }
    close(fd);
    return 0;
}