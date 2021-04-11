#include<stdio.h>
#include<malloc.h>

extern char **environ;

int main(int argc, char *argv[])
{
    int i;
    printf("Argument:\n");
    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] is %s\n", i, argv[i]);
    }
    printf("Environment:\n");
    for(i = 0; environ[i] != NULL; i++)   //  系统预定义全局变量environ显示各个环境变量的值，另一种显示环境变量的值事实上main函数完整形式 int main(int argc,char *argv[],char **envp)
    {
        printf("%s\n",environ[i]);
    }
    return 0;
}