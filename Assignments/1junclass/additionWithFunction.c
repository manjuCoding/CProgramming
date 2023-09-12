#include<stdio.h>
void add(int,int);
int a,b;
int main()
{ 
    int a,b;
    printf("enter any two number");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
     void add(int x,int y)
  {   
     printf("\naddition = %d",x+y);
  }