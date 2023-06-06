#include<stdio.h>
 int main(){
  int Num1=10;
  int Num2=20;
  int *ip;
  int Sum=Num1+Num2;
  ip=&Sum;
  printf("Sum of the numbers:%d\n",Sum);
  printf("Address stored in sum variable:%x\n",ip);
  printf("Value of *ip variable:%d\n",*ip);
  return 0;
 }