#include<stdio.h>
int main()
{
   char ch;
    printf("enter any character");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':    
    case 'i':   
    case 'o':  
    case 'u': 
    case 'A':    
    case 'E':  
    case 'I': 
    case 'O':
    case 'U':
    printf("\n it is vowel");
    break;
    default:
            printf("\n it is consonant");
        break;
    }
}