#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0,i=0;
    char str[50] ={"counting number of space"};
     
     do{
        if (str[i]=='')
        {
            count++;
        }
        i++;
    }while(i<=str[i]);
        printf("the space count=%d",count);
        return 0;
}