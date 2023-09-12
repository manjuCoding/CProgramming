#include<stdio.h>
int main()
{
   int i,no,fact = 1;
   printf ("Enter any no");
   scanf ("%d",&no);
   for (i=1;i<=no;i++)
{    
    fact  = fact*i;
    
}
printf("\n %d",fact);



}