#include<stdio.h>
int main()
{
   int a,b,c;  //->varaible declaration
     a=10;
     b=20;
     printf("before swap a=%d  b=%d",a,b);   // 10  20
     
     c=a;  //c=10;
     a=b;  //a=20;
     b=c;  //b=10
     
      printf("\n after swap a=%d  b=%d",a,b);  //20 10
   
  return 0;
}