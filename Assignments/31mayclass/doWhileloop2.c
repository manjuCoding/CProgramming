#include<stdio.h>
int main()
{
   int a,b,no;
//    char ch;
    do{
         printf("\n1.addition");
         printf("\n2.subtraction" );
         printf("\n3.multiplication");
     switch(no)
     {
        printf("enter any two no");
        scanf("%d%d",&a,&b);
        case 1: printf("add=%d",a+b);
             break;
        case 2: printf("subtract=%d",a-b);
             break;
        case 5: exit(0);    
     }  
        printf("etner any no"); 
        while(no<=4);
      //      fflush(stdin);
       //      scanf("%c",&ch);
   }  //         while(ch=='Y' || ch == 'y');
}