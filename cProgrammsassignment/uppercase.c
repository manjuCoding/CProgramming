#include<stdio.h>
int main()
{
  char ch;
 
  printf("Enter any number check it uppercase,lowercase or digit or any special symbol");
  scanf("%c",&ch);
 
 if(ch>=65 && ch<=90) 
  { printf("Given character is uppercase ");
  }
 else if(ch>=97 && ch<=122) 
 {
  printf("given character is lowercase");
 }
 else if (ch>=48 && ch<=57) 
 {
 printf("given character is digit");
}
 else
 {
    printf("given character is any special symbol");
 }

 return 0;
}