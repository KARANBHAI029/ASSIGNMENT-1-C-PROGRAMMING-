#include<stdio.h>
int main()
{
   char operator;
   int a, b;
   float operation;
   printf("select an operator from '+,-,*,/' ");
   scanf("%c", &operator);
   if(operator == +)
   printf("Addition");
   else if(operator == -)
   printf("Subtraction");
   else if(operator == *)
   printf("Multiplication");
   else if(operator == /)
   printf("Division");
   
   printf("Enter 2 numbers");
   scanf("%d,%d",a,b);
   
   switch(operator)
   {
      case'+':
      operation= a+b;
      printf("Answer is %f"operation);
      break;
      
      case'-':
      operation=a-b;
      printf("Answer is %f"operation);
      break;
      
      case'*':
      operation=a*b;
      printf("Answer is %f"operation);
      break;
      
      case'/':
      operation =a/b;
      printf("Answer is %f"operation);
      break;
      
   default:
   printf("Wrong input");   
   return 0;
}   