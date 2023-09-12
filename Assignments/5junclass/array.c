#include<stdio.h>
int main()
{  
    int a = 10;
    // printf("%d\n\n",a);

    int sno[5]= {10,20,30,40,50};
    // printf("%d",sno[0]);
    // printf("\t%d",sno[1]);
    // printf("\t%d",sno[2]);
    // printf("\t%d",sno[3]);
    // printf("\t%d",sno[4]);
    int i, sum=0;
 for (i=0;i<5;i++)
 {
 printf("\t%d",sno[i]); 
  // printf("\n\nsum=%d",sno[1]+sno[3]);
    // sum=sum+sno[i];
 }
    // printf("\n\nsum=%d",sum);

   int marks [5] ;
   printf("\nmarks of 5 subject");
      
    for(i=0;i<5;i++)
  scanf("%d",&marks[i]); 

    printf("entered marks of 5 subjects are below\n");
      
    for(i=0;i<5;i++)
  {
    sum=sum+marks[i];
  
    printf("\n\nsum of all marks=%d",sum);
  }
 
}


 
