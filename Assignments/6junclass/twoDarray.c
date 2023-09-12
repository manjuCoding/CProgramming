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
        printf("\nentered 3*3 element\n");
    }
       for(r=0;r<3;r++)
     {
        for(c=0;c<3;c++)
        {
          printf("%d ",a[r][c]);
        }
           printf("\n");
     }
}
