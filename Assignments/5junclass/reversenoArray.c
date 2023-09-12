#include<stdio.h>
int main()
{   
    int i;
 
    int a [10];
 printf("enter any number\n");
 for(i=0;i<10;i++){
 scanf("%d",&a[i]);
  }
    printf("print the no is reverse order");

   for(i=9;i>=0;i--){
    printf("\n%d", a[i]);
   }
}