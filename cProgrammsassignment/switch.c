#include<stdio.h>
int main()
{
   char ch;
    printf("enter any character");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
            printf("\n it is vowel");
        break;
         case 'e':
            printf("\n it is vowel");
        break;
         case 'i':
            printf("\n it is vowel");
        break;
         case 'o':
            printf("\n it is vowel");
        break;
         case 'u':
            printf("\n it is vowel");
        break;
    
    default:
            printf("\n it is consonant");
        break;
    }
}