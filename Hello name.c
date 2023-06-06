#include<stdio.h>
//Program that prompt the user to input his/her name//
   int main ()
    {
    	char Name[1024];
    	printf("What is your Name?\n");
    	scanf("%s",Name);
    	printf("Hello,%s! Welcome To Programming\n",Name);
	return 0;
   }