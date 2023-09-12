#include <stdio.h>
int main()
{  
   int i,j,no;
   printf("enter any no\n");
   scanf("%d",&no);
    for(i=1;i<=no;i++)  //outer loop -control rows
    {
        for(j=1;j<=i;j++) //inner loop  --control columns
        {
            printf("%d",j);
        } //end of inner loop
       
            printf("\n");
       
    }//end of outer loop
    return 0;
}