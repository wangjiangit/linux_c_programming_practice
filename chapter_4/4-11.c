#include <stdio.h>

int main() {
    int a[2][5] ={1,3,5,7,9,2,4,6,8,10};
    int (*p)[5],i;    // int (*p)[5]  p表示一个指针，它指向含有5个元素的一维数组。
    p=a;  //使p指向二维数组a的第一行，而后通过(*p)[i]访问该行的每一个元素
    for (i = 0;  i<5 ; i++)
        printf("%d ",(*p)[i]);
    printf("\n");

    p++;
    for(i=0;i<5;i++)
        printf("%d",(*p)[i]);
    printf("\n ")
    return 0;
}