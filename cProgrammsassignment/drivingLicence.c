#include<stdio.h>
int main()
{
  int age;
  char Gender;
 
  printf("Enter age to check driving license eligibility \n");
  scanf("%d", &age);
  printf("Enter  Gender to check driving license eligibility \n");
  scanf("\n%c", &Gender);
 
 if(age >= 18 && (Gender == 'M' || Gender == 'F')) 

   printf("Eligible for driving");
 
 else
 {
  printf("Not eligible for driving");
 }
   
  return 0;
}