#include<stdio.h>
int main()
{  
    int no,i=1,sum = 0;
    printf("enter any no");
    scanf("%d",&no);//28
    while(no>i) //28>1
 {    
   if( no%i==0)//28%1==0,
   {
    sum=sum+i;//0+1=1
 }
       i++;
 }
   if (no==sum)

    printf("enter no is perfect no");
  else
    printf("enter no is  not perfect no"); 
     

}