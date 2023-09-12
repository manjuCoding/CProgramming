#include<stdio.h>

int main()
{
    int no,i=1;
    printf("Enter the no\n");
    scanf("%d", &no);
     
    while(i<=10)
    {
        printf("\n%d*%d=%d",no,i,no*i);
    i++;
    }
    
   
    return 0;

}