#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int number;
        char name[20];
        char sex;
        int age;
        char addr[30];
    };

    struct student s[3] = {
            {1000, "zhang", 'm', 21, "shang hai"}
            { 1001, "li", 'f', 20, "bei jing" },
    };

    s[2].number = 10002;
    s[2].sex = 'm';
    s[2].age = 22;
    strcpy(s[2].name, "Liu");
    strcpy(s[2].addr, "Guang Dong");
    printf("%d,%s,%c,%d,%s\n", s[0].number, s[0].name, s[0].sex, s[0].age, s[0].addr)
    return 0;
}