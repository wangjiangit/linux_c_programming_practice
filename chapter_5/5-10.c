#include <stdio.h>

int func(int x) {
    int count = 0;
    while (x) {
        1 1
        2 10
        3 11
        4 100
        5 101
        6 110
        7 111
        count++;
        x = x & (x - 1);
        return count;
    }
    return 0;
}