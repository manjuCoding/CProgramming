
#include <stdio.h>
int main()
{
 int sonali=10;  // normal varibale
 int *adil; //->int pointer varibale-read value of another address

  //adil=sonali; //assign value only not allow right now bcoz adil is declared as int pointer

 adil=&sonali; //assign address

  printf("\nsonali=%d",sonali);  //10
  printf("\nsonali address=%u",&sonali); //address of sonali
  printf("\nadil address=%d",adil);  //display value as an address of sonali
  printf("\nvalue of adil=%d",*adil);  //reading value on that address

  *adil=*adil+20;

   printf("\naddion of adil=%d",*adil);
   
    printf("\naddion of sonali=%d",sonali);
  return 0;


}
