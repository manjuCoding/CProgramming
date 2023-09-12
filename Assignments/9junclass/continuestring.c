#include<stdio.h>
int main()          
{
  char str[6],ch;
  int i;
  printf("enter any string character\n");
  gets(str);
  printf("enter any character");
  scanf("%c",&ch);
  for(int i=0;str[i]!='\0';i++){
  if ( str[i]==ch)
  {
  continue;
  }
      printf("%c",str[i]);
 }
}


