#include <stdio.h>

int main() {
    struct data {
        long l;   // 分配8个字节
        char *s;  // 分配4个字节
        short int i; // 分配2个字节
        char c; // 分配2个字节
        short int a[5]; //分配16个字节
    } d;
    struct data *p = &d;
    printf("%d\n", sizeof(d));
    printf("%x\t%x\n", p, p + 1);
    printf("%x\t%x\n", p, (char *) p + 1);
    printf("%x\t%x\n", p, (char *) p + 1);
   // 32
   // bffff60 bffff80
   // bffff60 bffff61
   // bffff60 bffff64
    return 0;
}