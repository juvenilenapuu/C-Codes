//Program that uses Function to find the area of a rectangle//
#include<stdio.h>
  int area(int length,int width)
  {
return length*width;
  }
  int main(){
    int length=10;
    int width=4;
    int a=area(length,width);
    printf("%d",a);
    return 0;
  }
  