#include<stdio.h>
int main ()
{  
    int no,rem;
    printf("enter any no to print reminder");
    scanf("%d",&no);//123456
    for(;no>0; )
    { 
      rem=no%10;
      printf("%d",rem);
      no=no/10;
    }






}