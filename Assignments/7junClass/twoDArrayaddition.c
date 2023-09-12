#include<stdio.h>
int main()
{   
    int a[3][3],r,c;
    printf("\nenter any number");
    for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
        {
            scanf("%d ",&a[r][c]);
        }
    }
        printf("\n row wise sum\n");
       
       for(r=0;r<3;r++)
     {  int sum=0;
     
        for(c=0;c<3;c++)
        {
          sum = sum+a[r][c];
          }
          printf("%d ",sum);
        
          
     }
       printf("\n row wise sum\n");
       
       for(r=0;r<3;r++)
     {  int sum=0;
     
        for(c=0;c<3;c++)
        {
          sum = sum+a[c][r];
          }
          printf("%d ",sum);
        
          
     }
      printf("\n column wise sum\n");
       
       for(c=0;c<3;c++)
     {  int sum=0;
     
        for(r=0;r<3;r++)
        {
          sum = sum+a[c][r];
          }
          printf("%d ",sum);
        
     }
}
