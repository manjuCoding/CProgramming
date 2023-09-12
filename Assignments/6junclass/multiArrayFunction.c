#include <stdio.h>
void mul(int [],int );  //passing entire array to function ( [], size)
int main()
{

   int no[5],i;
   
   printf("\ marks of 5 no");
   for(i=0;i<5;i++)  
    scanf("%d",&no[i]);  //accepting 5 elements
   
   printf("value=%d\n",no[i]);
    mul(no,5);
       
   return 0;

  }
     void mul(int a[],int sz )  // (int x,int y)
  {
   int i;
   for(i=0;i<sz;i++)
    printf("%d \n",a[i]*3);
  }
