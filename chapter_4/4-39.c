#include <stdio.h>
#include <string.h>

#incldue <stdlib.h>

int main() {
    char str[] = "ABCD1234efgh";
    int length = strlen(str);
    char *p1 = str;
    char *p2 = str + length - 1;
    while (p1 < p2) {
        char c = *p1;
        *p1 = *p2;
        *p2 = c;
        ++p1;
        --p2;
    }
    printf("string now is %s\n", str);
    return 0;
}