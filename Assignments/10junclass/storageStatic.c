#include<stdio.h>
void add();
int main()
{
   add();
   add();
   add();
   return 0;
}
   void add ()
 {
    static int a=15;
   printf("%d",a);
   a++;
 }
