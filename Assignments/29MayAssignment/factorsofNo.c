#include<stdio.h>
int main()
{
   int i = 1;
   int no;
   printf("enter any no \n");
   scanf("%d",&no);
   for (i=1;i<=no;i++)
    {  
    if (no%i==0)
     printf("\n %d",i);
    }

}