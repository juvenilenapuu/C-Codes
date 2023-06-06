#include<stdio.h>
//Program that uses IF ELSE selection to grade students according to their marks//
  int main(){
  	int marks;
  	  printf("Enter student marks\n");
  	    scanf("%d",&marks);
  	    if(marks>=40)
		      {
  	    	printf("The Student has passed\n");
			  	}
		 else
		  		{
		 			printf("The student has Failed\n");
		 		  }
		  return 0;

  }