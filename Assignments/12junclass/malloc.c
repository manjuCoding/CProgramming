#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no,*ptr,i,sum=0;
    printf("enter number of elements");
    scanf("%d",&no);

    ptr = (int*) malloc(no*sizeof(int));
    printf("enter elements");
    for(i=0;i<no;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<no;i++)
    {
       sum=sum+*(ptr+i);
    }
     printf("%d\n",sum);
    free(ptr);
    return 0;
}