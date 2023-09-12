#include<stdio.h>
int main()
{
    int sci,math,eng; 
    float per; 

    printf("Enter 3 subjects marks: ");
    
    scanf("%d%d%d", &sci,&math,&eng);

    per = (sci + math + eng) / 3.0;

    printf("Percentage = %.2f\n", per);
    
    if(per >= 70)
    {
        printf("DISTINCTION");
    }
    else if(per <= 70 && per>=60)
    {
        printf("FIRST CLASS");
    }
    else if(per <=60 && per >= 50)
    {
        printf("2nd class");
    }
    else if(per <= 50 && per >= 40)
    {
        printf("pass"); 
    }
}