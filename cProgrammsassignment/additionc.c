#include<stdio.h>
int main()
{
  int a,b,c;   //varaible delaration
 
  //scanf("format specifier", variable name followed by amperson)
  printf("enter three digit numbers ");
  scanf("%3d%3d",&a,&b);  //using width specifier
  //445 665 246
  c=a+b;
      printf("%d+%d=%d",a,b,c);
     
  //--------------------------------------------------------------
     
  return 0;
}