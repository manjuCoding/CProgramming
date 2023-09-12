#include<stdio.h>
int main()
{
    int base, exponent,power, i;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);

    power = 1;
    i = 1;

    while(i <= exponent)
    {
        power = power * base;
        i++;
    }
    printf(" %d", power);
    return 0;
}