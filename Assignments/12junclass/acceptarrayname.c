#include<stdio.h>
int main()
{
    int i;
    char name [3][20];
    for(i=0;i<3;i++)
    gets(name[i]);
    for(i=0;i<3;i++)
   printf("%s\n",name[i]);
}
   
   