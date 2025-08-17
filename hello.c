#include<stdio.h>
int main ()
{
    //Conditional Statements 

  int age;
  printf("enter age : ");
   scanf("%d", &age );

   if (age >= 18) 
   {
    printf("Adult");
   }
  
   else if (age>=13 && age<18)
   {
    
    printf("teenager \n ");
    
   }
   
   
   else  
   {
    printf("Kid");
   }
   return 0;}