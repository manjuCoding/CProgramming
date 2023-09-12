#include<stdio.h>
#include<string.h>
int main()
{
  char str[10], str1[10];
  printf("enter first string");
  gets(str);
 
  printf("\nenter second string");
  gets(str1);
  
  if(strcmp(str,str1)==1) 
  {
     printf("\nstring str is greater");
  }
        else if (strcmp(str,str1)==-1)
        {
         printf("\nstring str1 is greater");
        }
        else{
          printf("\nstring is  equal");
       }
    
   return 0;
   
}