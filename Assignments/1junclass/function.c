//without retrun using void #include <stdio.h>
#include <stdio.h>

void arithmatic();  //1.function declaration-befor entering into main
void add();  //function declaration
int main()
{  
   int a,b;
   
   arithmatic();  //2.function call- within main
  printf("\n\nwelcome to function topic");
   add();  //2.function call- within main  
     printf("\n\nwelcome to function topic");
      arithmatic();  //2.function call- within main 
  return 0;
}

void arithmatic()     //3.function definition- outside th main
{
   int a,b;
   printf("enter any two numbers");
   scanf("%d%d",&a,&b);  
   printf("\naddition=%d",a+b);
    printf("\nsubstraction=%d",a-b);
    printf("\nmultiplication=%d",a*b);
    printf("\ndivision=%d",a/b);    
}

void add()     //3.function definition- outside th main
{
   int a,b;
   printf("enter any two numbers");
   scanf("%d%d",&a,&b);
   printf("\naddition=%d",a+b); 
}