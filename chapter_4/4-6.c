
/*
 file1.c

 #include <stdio.h>
 extern long power(int)
 int A=3;
 main(){
    int n=10,total;
    total=power(n);
    printf("2^10 = %d\n",total);
    return 0;
 }

 file2.c
 extern A;
 long power(int n){
    long total =1;
    int i;
    for(i=1,i<=n;i++)
        total=total*A;
    return total;
 }
 #gcc file1.c file2.c -o file
 */
