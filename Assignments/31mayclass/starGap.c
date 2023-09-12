#include <stdio.h>
int main()
{  
   int i,j,no =7;
 
    for(i=1;i<no;i++)  //outer loop -control rows
    {
        for(j=1;j<no;j++) //inner loop  --control columns
        {
            if(i==1||i==no || j==1||j==no)
            {
            printf("*");
            }
            else {
            printf(" ");
           }
        } //end of inner loop 
            printf("\n ");
       
    }//end of outer loop
    return 0;
}