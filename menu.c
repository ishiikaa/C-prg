#include <stdio.h>
#include <conio.h>

void main () {
    
   float num1,num2,ans;
   int opt;
   
   do
   {
   printf("\nEnter the First Number : ");
   scanf("%f",&num1);
   printf("\nEnter the Second Number : ");
   scanf("%f",&num2);

   printf("\n Menu Program In C\n1.Addition");
   printf("\n2.Subtraction\n3.Multiply\n4.Divide\n5.Exit");
   printf("\nEnter your choice : ");
   scanf("%d",&opt);
   switch(opt)
   {
     case 1:
              ans = num1+num2;
              printf("\nThe addition of 2 numbers is : %f",ans);
              break;
     case 2:
             ans = num1-num2;
             printf("\nThe differnce of 2 numbers is : %f",ans);
             break;
     case 3:
             ans = num1*num2;
             printf("\nThe product of 2 numbers is : %f",ans);
             break;
     case 4:
              ans = num1/num2;
              printf("\nThe division of 2 numbers is : %f",ans);
              break;
    case 5:
             break;
    default:  
              printf("\nYou Entered Wrong Choice\n");
              break;
   }
    }while(opt!=5);
}