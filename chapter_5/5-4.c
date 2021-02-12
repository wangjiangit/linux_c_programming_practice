#include <stdio.h>

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
            { 1002, "liu", 'm', 22, "guang dong" },
    };

    struct student *p;
    for (p = s; p < s + 3; p++) {
        printf("%d,%s,%c,%d,%s", p->number, p->name, p->sex, p->age, p->addr);
    }

    return 0;
}