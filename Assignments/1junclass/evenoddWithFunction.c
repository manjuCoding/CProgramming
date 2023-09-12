#include<stdio.h>
int check (int);
int main()
{ 
    int no,c;
    printf("enter any no");
    scanf("%d%d",&no);
    c=check(no);
    if (c==1)
    printf("even");
    else
    printf("odd");

    return 0;
} 
  int check(int no)
  {
    if (no%2==0)
    return 1;
    else
    return 0;
  }