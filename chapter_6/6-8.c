#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char *argv[])
{
    umask(0); // 不屏蔽任何权限
    if(creat("example_681.test",S_IRWXU|S_IRWXG|S_IRWX0)){
        perror("creat");
        exit(1);
    }

    umask(S_IRWXO); // 不屏其他用户的所有权限
    if(creat("example_682.test",S_IRWXU|S_IRWXG|S_IRWX0)){
        perror("creat");
        exit(1);
    }

    truncate("test4.cpp",100);//修改大小

    if(chown("test3.cpp",123,123) < 0){//更改组
        perror("chown");
    }
    return 0;
}