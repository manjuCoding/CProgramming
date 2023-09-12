#include<stdio.h>
int main()
{
  int year;
 
  printf("Enter any year to check leap year Or not ");
  scanf("%d",&year);
 
 if(year%4==0) 
   printf("Given year is Leap year");
 else
 {
  printf("Given year is not a leap year");
 }
   
  return 0;
}