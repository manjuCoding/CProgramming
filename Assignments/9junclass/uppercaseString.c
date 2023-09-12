#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("enter any string character\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]<=90 && str[i]>=65){
        str[i]= str[i]+32;
        }
         
        else if(str[i]<=122 && str[i]>=97){
        str[i]= str[i]-32;     
        }
        
    }
    printf("%s",str);
 }