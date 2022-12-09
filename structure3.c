#include<stdio.h>
struct student
{
    int RollNo;
    char name[40];
    int marks;
}s[40],*s1;
int main()
{
    s1=&s;
    printf("Enter the details of the 5 students: \n");
    for(int i=0;i<5;i++)
    {
        printf("Enter the roll no , name , marks: ");
        scanf("%d%s%d",&(s1+i)->RollNo,&(s1+i)->name,&(s1+i)->marks);
    }
    printf("The details of the 5 student are: \n");
    for(int i=0;i<5;i++)
    {
        printf("Roll No.: %d  Name: %s  Marks: %d\n",(s1+i)->RollNo,(s1+i)->name,(s1+i)->marks);
    }
    return 0;
}