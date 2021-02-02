#include <stdio.h>

#define MAX 255

int main() {
    unsigned char a[MAX], i;
    for (i = 0; i <= MAX; i++)
        a[i] = i;
    for (i = 0; i <= MAX; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}