#include<stdio.h>
int findmax (int ,int);
int main()
{ 
    int a,b,max;
    printf("enter any no to print max no");
    scanf("%d%d",&a,&b);
    // printf("enter two no");
    // scanf("%d",&b);
    
    
    max=findmax(a,b);
    printf("%d",max);

} 
  int  findmax(int a,int b)
  {
    if (a>b)
    return a;
    else
    return b;
  }