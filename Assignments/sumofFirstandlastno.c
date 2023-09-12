#include<stdio.h>
int main()
{
    int n,sum=0,firstdigit,lastdigit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d",&n);//1234
    lastdigit=n%10;//1234%10 ==4

    while(n>=10)//1234>=10
    {
       n=n/10;//1234/10
    }
    firstdigit=n;
    sum  = firstdigit + lastdigit;
   printf("Sum of first and last digit =%d",sum);

}