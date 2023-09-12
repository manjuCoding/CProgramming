#include<stdio.h>
int main()
{
//   char ch = 'a';
//   printf("%c",ch);
//   char ch1 = 'sonali';
//   printf("\n%c",ch1);
//   char ch2[] = "sonali";
//   printf("\n%s",ch2);
//    char ch4[6]="sonali";
//    printf("\n%s",ch4);
      char ch4[6];
    printf("enter any char");
    scanf("%c",ch4);
    printf("ch4=%s\n",ch4);

     char str [15];
     printf("enter any string");
     scanf("%s",str);
     printf("%s",str);


       fflush(stdin);  //flush or clean stich char data and allow to accept new char further
     
      char str1[15];
      printf("\nenter any string");
      gets(str1);  //read string
      puts(str1);  //disp string data
     
     
   
     
    return 0;
     

}