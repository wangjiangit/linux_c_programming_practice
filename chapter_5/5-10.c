#include <stdio.h>

int func(int x) {
    int count = 0;
    while (x) {
        count++;
        x = x & (x - 1);
        return count;
    }
    return 0;
}