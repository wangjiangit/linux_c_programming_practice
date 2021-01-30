#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    extern int  i,j;
    printf("%d\n", max(i, j));
}

int i = -5, j = 10;