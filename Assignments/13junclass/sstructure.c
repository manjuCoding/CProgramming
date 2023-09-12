#include<stdio.h>
struct student
{
    int sno;
    char snm[15];
    float marks;

}s1;

int main()
{
    struct student s3;
    struct student s2 = {101,"Ayushi",85};
    printf("%d %s %f",s2.sno,s2.snm,s2.marks);
     
       printf("\nenter information of student");
       scanf("%d%s%f",&s1.sno,&s1.snm,&s1.marks);

     printf("\n%d\n%s\n%f",s1.sno,s1.snm,s1.marks);


}


