#include<stdio.h>
int main()
{
  int number;
 
  printf("Enter any number to check even Or Odd ");
  scanf("%d",&number);
 
 if(number%2==0) 
   printf("Given number is Even");
 else
 {
  printf("Given number is odd");
 }
   
  return 0;
}