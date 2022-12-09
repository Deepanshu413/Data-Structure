#include <stdio.h>
struct student
{
  int roll_no;
  char name[30];
  int age;
  char address[50];
};
int printFunc1(struct student st[], int size)
{
    printf("Students having age = 14\n");
    for(int i=0; i<size; i++)
    {
  	    if(st[i].age == 14)
        {
  	        printf("%s\n", st[i].name);
  	    }
    }
}
int printFunc2(struct student st[], int size)
{
    printf("Students having even roll number\n");
    for(int i=0; i<size; i++)
    {
  	    if((st[i].roll_no)%2 == 0)
        {
  	        printf("%s\n", st[i].name);
  	    }
    }
}
int printFunc3(struct student st[], int size)
{
    printf("Students whose roll number is entered\n");
    for(int i=0; i<size; i++)
    {
  	    if((st[i].roll_no > 0) && (st[i].roll_no <= 20))
        {
  	        printf("%s\n", st[i].name);
  	    }
    }
}   
int main()
{
    struct student stud[10];
    for(int i=0; i<10; i++)
    { 
        printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &stud[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",stud[i].name);
        printf("Enter age :\n");
        scanf("%d", &stud[i].age);
        printf("Enter address :\n");
        scanf("%s",stud[i].address);
    }
    printFunc1(stud, 10);
    printFunc2(stud, 10);
    printFunc3(stud, 10);
    return 0;
}