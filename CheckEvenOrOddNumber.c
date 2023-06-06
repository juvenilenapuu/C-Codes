//Program to check whether a given number is odd or even//
#include<stdio.h>
int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d",&num);
  if(num % 2 == 0)
  printf("Number %d is even\n",num);
  else
  printf("Number %d is odd\n",num);
  return 0;
}