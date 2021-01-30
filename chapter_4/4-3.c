#include <stdio.h>

float fac(int n) {
    float f;
    if (n < 0) {
        printf("n<0,data error");
        return -1;
    } else if (n == 1 || n == 0) {
        f = 1;
    } else {
        f = n * fac(n - 1);
    }
}

int main() {
    /*int i;
    float f = 1;
    for (int i = 1; i < 10; i++) {
        f = f * i;
    }
    printf("10!=%10.0f\n", f);
    */
    int n = 10;
    float f;
    f = fac(n);
    printf("n!= %10.0f\n", f);
}