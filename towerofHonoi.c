#include<stdio.h>
int TOH(int ,char,char,char);
int main() {
   int k=3;
   TOH(k,'A','B','C');
}
int TOH(int k,char x,char y,char z) {
   if(k>0) {
      TOH(k-1,x,z,y);
      printf("\n%c to %c",x,y);
      TOH(k-1,z,y,x);
   }
   return 0;
}