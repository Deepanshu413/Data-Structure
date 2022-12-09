#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int marks;
}s,*s1;
int main()
{
    s1=&s;
    printf("Enter the roll no, name, marks: ");
    scanf("%d%s%d",&s1->r,&s1->name,&s1->marks);
    printf("The details of a student is : \n");
    printf("marks: %d\nName: %s\nMarks: %d",s1->r,s1->name,s1->marks);
}
