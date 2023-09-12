#include<stdio.h>
int main()
{
  int no,rem,sum= 0,num,k;
  printf("enter any three digit");
  scanf("%d",&no);//153
    num=no;
  while(no>0)//153>0 //(only change the for loop all code is same.)
  {
  rem = no%10; //153%10
  k=rem*rem*rem;//3
  sum = sum+k;//0+3
  no = no/10;//153/10
  }
  if(sum==num)
  printf("armstrong");
  else
  printf("not armstrong") ;
}