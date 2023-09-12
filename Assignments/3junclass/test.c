#include <stdio.h>
void swap(int *,int*);
int main()
{
 
 int a,b;
 printf("enter any two number");
 scanf("%d%d",&a,&b);  //15 18
 printf("\nBefore function call value of a=%d and b=%d",a,b); // 15 18
 
  swap(&a,&b);  //pass value by address or reference

 printf("\nAfter function call value of a=%d and b=%d",a,b); //18 15

return 0;


}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;    //temp=15;
    *x=*y;
    *y=temp;
    printf("\nAfter swapping in function value of x=%d and y=%d",*x,*y);
                                                              // 18 15
}