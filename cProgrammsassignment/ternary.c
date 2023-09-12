#include<stdio.h>
int main()
{
  int year;
 
  printf("Enter any year to check leap year Or not ");
  scanf("%d",&year);
 
 (year%4==0) ? printf("given year is leap year"):printf("given year is not leap year");
    
  return 0;
}