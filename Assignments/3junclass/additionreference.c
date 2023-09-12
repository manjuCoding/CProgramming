#include <stdio.h>
void swap(int ,int,int*);
int main()
{
 
 int a,b,c;
 printf("enter any two number");
 scanf("%d%d%d",&a,&b,&c);  
 printf("\nBefore function call value of a=%d and b=%d",a,b);
 
swap(a,b,&c);  //pass value by address or reference

 printf("\nAfter function call value of a=%d and b=%d",a,b,c);

return 0;


}
void swap (int x , int y,int*z)
{
    *z = x-y;
    printf("\nAfter swapping in function value of *z=%d",*z );
                                                             
}