#include<stdio.h>
int main()
{
    int number,remainder,reverse=0;

    printf("\n  Enter The Number:");
    scanf("%d",&number);

   for(;number>=1;number=number/10){
     remainder = number % 10;
     reverse =  reverse * 10 + remainder;
     //i = i/10;
   }
   
   printf("\n  The Reverse Number of is %d",reverse);

}