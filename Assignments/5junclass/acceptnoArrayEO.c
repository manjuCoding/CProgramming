#include<stdio.h>
int main()
{   
 int i,n;

 printf("Enter a number limit to check even odd");
 scanf("%d",&n);

 int sno [n];
 printf("enter any number");
 for(i=0;i<n;i++){
 scanf("%d",&sno[i]);
 }

 for(i=0;i<n;i++){

if (sno[i]%2==0)
{
  printf("\nGiven No is even\t");
  printf("%d",sno[i]);
}
else 
{
  printf("\ngiven number is odd number\t");
   printf("%d",sno[i]);
}

 }
 
}