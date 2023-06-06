#include<stdio.h>
//Program that calculates the area of triangle//
   int main(){
   	int Base;
         	printf("Enter the Base\n");
    	     scanf("%d",&Base);
    int Height;
         	printf("Enter the Height\n");
            scanf("%d",&Height);
        int Area=0.5*Base*Height;
        printf("Area is %d",Area);
        return 0;
	}