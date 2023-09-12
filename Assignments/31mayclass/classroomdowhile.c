#include <stdio.h>
#include<process.h>
void main()
{  
    int no,a,b;
    do
    {
        printf("\n1.addition");
        printf("\n2.substration");
        printf("\n3.multiplication");
        printf("\n4.division");
        printf("\n5.exit");

        printf("\n\tenter any no between 1-5");
        scanf("%d", &no);
      printf("enter any two no: ");
          scanf("%d%d", &a,&b); 
      switch(no)
    
  {
     
   case 1:
          
          printf("\naddition=%d",a+b);
           break;
          case 2:printf("\nsubstration=%d",a-b);
           break;
          case 3:printf("\nmultiplication=%d",a*b);
           break;
          case 4:printf("\ndivision=%d",a/b);
           break;
          case 5:exit(0);
    } // end of switch
       
    
      }while(no<=4) ;  //end of do while
   
}