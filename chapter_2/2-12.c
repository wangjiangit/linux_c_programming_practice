#include <stdio.h>

int main() {

    int a = 1, b = 2, temp;
    temp = a;
    a = b;
    b = temp;


    int c = 1, b = 2;
    a = a + b;
    b = a - b;
    a = a - b;

}
