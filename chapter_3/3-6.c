#include <stdio.h>

int main() {
  /* 由于float的精度问题,float类型的变量i与零值比较
   不该写成
   if(x==0.0)
   if(x!=0.0)
   而应该写出
   if((x>=-0.00001) && (x<=0.00001))*/
}


