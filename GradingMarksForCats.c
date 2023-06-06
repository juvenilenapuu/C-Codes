#include<stdio.h>
//Program that takes student's marks then calculate and grade them according to their marks//
   int main(){
      int cat1;
       int cat2;
      int cat3;
    int main_exam;
          printf("Enter cat1 marks\n");
              scanf("%d",&cat1);
                 printf("Enter cat2 marks\n");
                  scanf("%d",&cat2);
          printf("Enter cat3 marks\n");
              scanf("%d",&cat3);
                  printf("Enter main exam marks\n");
                     scanf("%d",&main_exam);
      int Total_marks=(cat1+cat2+cat3)/3+main_exam;

             printf("Total marks is %d\n",Total_marks);

                  if((Total_marks>=0)&&(Total_marks<=39))
          {
                       printf("Failed\n");
          }
                         else if((Total_marks>=40)&&(Total_marks<=49))
          {
                   printf("Grade D Aim higher\n");
          }
          else if((Total_marks>=50)&&(Total_marks<=59))
          {
             printf("Grade C Has potential\n");
          }
                   else if((Total_marks>=60)&&(Total_marks<=69))
          {
                         printf("Grade B Above average\n");
          }
          else if((Total_marks>=70)&&(Total_marks<=100))
          {
                            printf("Grade A Good Work\n");
            }
          else("Invalid Entry\n");
   }