#include<stdio.h>
int main()
{  
   int no,i=1,sum=0;
   printf("Enter any number");
   scanf("%d",&no);//28
    for(  ;i<no;i++ )//1<28,
    {  
     if (no%i==0)//28%1=0,
     sum= sum+i; // 0+1=1,
    }
    if (sum==no)
         printf("enter number is a perfect");
    else
         printf("enter number is not a perfect");
}    