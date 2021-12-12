#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(void)
{
    FILE   *stream;
    char   *filename = "test";

    errno = 0;  //初始化错误码

    stream = fopen (filename, "r");
    if(stream == NULL){
        printf ("open file %s failed, errno is %d: %s\n", filename, errno, strerror(errno));
     // perror("错误");
        printf("ENOENT 宏值是%d\n",ENOENT);
    }
    else {
        printf ("open file %s successfully\n", filename);
    }
}
