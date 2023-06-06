#include<stdio.h>
//Program that uses NESTED IF selection to grade marks//
  int main(){
  	int Marks;
  	  printf("Enter Marks\n");
  	    scanf("%d", &Marks);
  	    if((Marks>=0)&&(Marks<=39))
		       {
  	    	printf("Fail\n");
			   }
		 else if((Marks>=40)&&(Marks<=49))
		  {
		 printf("Grade is D\n");
		  }
		  else if((Marks>=50)&&(Marks<=59))
		  {
		  	printf("Grade is C");
		  }
		  else if((Marks>=60)&&(Marks<=69))
		  {
		    printf("Grade is B");
		  }
		  else if((Marks>=70)&&(Marks<=100))
		  {
		  	printf("Grade is A");
		  }
		  else {
		  	printf("Invalid Entry");
		  }
		  
		  return 0;
  }