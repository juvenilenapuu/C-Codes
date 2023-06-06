#include<stdio.h>
  //Program that uses NESTED IF selection to grade marks//
   int main(){
   	  int Cat1;
   	    int Cat2;
   	      int Cat3;
   	      int Final_exam;
   	     float Total_marks;
   	      
   	       printf("Enter Cat1 score\n");
   	        scanf("%d",&Cat1);
  printf("Enter Cat2 score\n");
   	      scanf("%d",&Cat2);
   	     printf("Enter Cat3 score\n");
             scanf("%d",&Cat3);
         printf("Enter Final score\n");
           scanf("%d",&Final_exam);
           
    	   		  Total_marks=(Cat1+Cat2+Cat3)/3+Final_exam;
         printf("Total marks is %.2f\n\n",Total_marks);
                   
     			    if((Total_marks>=0)&&(Total_marks<=39))
				{
					printf("Failed\n");
				}
		   else if((Total_marks>=40)&&(Total_marks<=49))
		       {
		       	printf("Grade is D\n");
			   }
	         else if((Total_marks>=50)&&(Total_marks<=59))
	         {
	         	printf("Grade is C\n");
			 }
			    else if((Total_marks>=60)&&(Total_marks<=69))
			     {
			     	printf("Grade is B\n");
				 }
				   else if((Total_marks>=70)&&(Total_marks<=100))
				    {
				    	printf("Grade is A\n");
					}
           else("Invalid Entry\n");
              
              return 0;
			  }