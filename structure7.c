#include<stdio.h>
struct student
{
    int physics,chemistry,maths;
}s[40],*s1;
int main()
{
    s1=&s;
    printf("Enter the marks  of the 5 students in physics chemistry and maths repectively: \n");
    for(int i=0;i<5;i++)
    {
        printf("Enter the roll no , name , marks: ");
        scanf("%d%d%d",&(s1+i)->physics,&(s1+i)->chemistry,&(s1+i)->maths);
    }
    printf("The marks  of the 5 students in physics chemistry and maths repectively:: \n");
    for(int i=0;i<5;i++)
    {
        printf("physics: %d  chemistry: %d  maths: %d\n",(s1+i)->physics,(s1+i)->chemistry,(s1+i)->maths);
    }
    return 0;
}