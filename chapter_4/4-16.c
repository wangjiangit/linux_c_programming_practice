#include <stdio.h>

int get_big(int i, int j) {
    return i > j ? i : j;
}

int (*get_function(int a))(int, int) {
    printf("the number is %d\n", a);
    return get_big;
}


int main() {
    int i = 5, j = 10, max;
    p = get_function(100);
    max = p(i, j);
    printf("the MAX is %d\n", max);
    return 0;
}