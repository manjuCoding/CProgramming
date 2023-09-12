#include <stdio.h>
int main()
{  
   int i,j;
    for(i=1;i<=3;i++)  //outer loop -control rows
    {
        for(j=97;j<=99;j++) //inner loop  --control columns
        {
            printf("%c",j);
        } //end of inner loop
       
            printf("\n");
       
    }//end of outer loop
    return 0;
}