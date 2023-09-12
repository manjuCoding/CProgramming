#include<stdio.h>
int main()
{
    int days;
  printf("enter number of days in month");
  scanf("%d",&days);
    switch (days)
    {
    case 31:
            printf("\n January,March,May,July,August,Octuber,December");
        break;
    case 30:
            printf("\n April,Jun,September,November");
        break;
    case 29:
            printf("\n February");
        break;
    default:
            printf("you are entered invalid input");
        break;
    }
}