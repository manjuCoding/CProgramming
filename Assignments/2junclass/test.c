void change(int *);
int main()
{
    int x;
    x=100;

  printf("before function call=%d"x);

  change(x); //function call
 printf("\nafter function call=%d",x);

}

void change (int *no)

{

printf("\nbefore adding value inside function no=%d", *no);
 *no=*no+10; 
 printf("\nafter adding value inside function no=%d",*no);

}