#include<stdio.h>
int main()
{ 
   int i ,no;
   printf("enter any no");
   scanf("%d",&no);

   for (i = 2;i<=no;i++)
 {
    if (no%i==0)

 
     printf("\n %d",i);

 }


}