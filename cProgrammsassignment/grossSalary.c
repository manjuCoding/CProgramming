#include<stdio.h>

int main()
{
    int bs;
    float gs,da,hra;
    printf("enter bs of employee ");
    scanf("%d",&bs);
    if (bs>10000)
    {
      da = .15*bs;
      hra = .10*bs;
    }
    else{
        da = 0.2*bs;
        hra = 0.05*bs;
    }
    gs = bs+da+hra;
      printf("the gs of employee is :%f",gs);
    }


    

   

