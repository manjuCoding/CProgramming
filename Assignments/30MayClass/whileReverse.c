#include<stdio.h>
int main()
{  
   int no,rem;
   printf("Enter any number to print reminder");
   scanf("%d",&no);
    while(no>0)
 {
    rem = no%10;
  printf("%d",rem);
  
   no = no/10;

 }
}