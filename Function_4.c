#include<stdio.h>
//Program that uses declare function to output marks//
void fun(int x){
  if(x>=50)
  {
    printf("Passed\n");
  }
  else
  {
    printf("Failed\n");
  }
}
int main(){
  int marks;
  printf("Enter your marks");
  scanf("%d",&marks);
  fun(marks);
}