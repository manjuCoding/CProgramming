#include <stdio.h>
int main()
{  
   int i,j;
//    printf("enter any no");
//    scanf("%d");//5
    for(i=5;i>=1;i--)  //outer loop -control rows 
    {
        for(j=i;j>=1;j--) //inner loop  --control columns
        {
            printf("%d",j);
        } //end of inner loop
       
            printf("\n");
       
    }//end of outer loop
    return 0;
}