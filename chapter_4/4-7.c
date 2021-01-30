#include <stdio.h>

int main() {
    int a[2][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8}}
    int b[4][2], i, j;
    printf("array a:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("array b:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; ++j) {
            printf("%5d", b[i][j]);
        }
    }
    return 0;
}