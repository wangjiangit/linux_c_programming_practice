#include <stdio.h>

char *RetMemory() {
    char p[] = "hello world";
    return p;
}


int main() {
    char *str = NULL;
    str = RetMemory();
    printf(str);
    return 0;
}