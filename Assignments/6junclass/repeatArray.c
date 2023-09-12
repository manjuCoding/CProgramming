#include <stdio.h>
int main()
{

   int no[5],i,n,cnt=0;
   
   printf("\ marks of 5 no");
   for(i=0;i<5;i++)  
    scanf("%d",&no[i]);  //accepting 5 elements   1 2 3 1 2
   
      printf("\nenter any digit");
     scanf("%d",&n);  //accept 1 number   2
     
     
     for(i=0;i<5;i++)  
     {
         if(no[i]==n)  //1==2  2==2 3==2  1==2  2==2
           cnt++;  
     }
   
   
       printf("\noccurence of entered number=%d\n",cnt);
 
       return 0;
}