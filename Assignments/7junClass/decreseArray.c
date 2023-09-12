#include<stdio.h>
int main()
{ 
    int a[5]= {45,17,18,16,2},i,j,temp;
    printf("Before sort\n");
     for (i=0;i<5;i++)
     printf("%d\t",a[i]);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
         if(a[i]>a[j])
         {
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
         }

        }
    }
         printf("\n\nAfter Sorting \n\n");
         for(i=0;i<5;i++)
         printf("%d\t",a[i]);
          return 0;
}
