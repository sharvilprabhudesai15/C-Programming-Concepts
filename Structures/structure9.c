//pointer to a structure
#include <stdio.h>
#include <string.h>
typedef struct student
{ int sid,mk1,mk2;
  char sname[50];
}stud;
//-> struture_ptr->struct_membername
int main()
{   stud s,p;
    stud *s1=&s;
    printf("enter the details of each student\n");
    printf("enter student id:\t");
    scanf("%d",&s1->sid);
    printf("enter student name:\t");
    scanf("%s",s1->sname);
    printf("enter student marks for subject1:\t");
    scanf("%d",&s1->mk1);
    printf("enter student marks for subject2:\t");
    scanf("%d",&s1->mk2);
    printf("\nstudent id:%d\t",s1->sid);
    printf("\nstudent name:\t%s",s1->sname);
    printf("\nstudent marks for subject1:\t%d",s1->mk1);
    printf("\nstudent marks for subject2:\t%d",s1->mk2);
    s1=&p;
    printf("\nenter the details of each student\n");
    printf("\nenter student id:\t");
    scanf("%d",&s1->sid);
    printf("enter student name:\t");
    scanf("%s",s1->sname);
    printf("enter student marks for subject1:\t");
    scanf("%d",&s1->mk1);
    printf("enter student marks for subject2:\t");
    scanf("%d",&s1->mk2);
    printf("\nstudent id:%d\t",p.sid);
    printf("\nstudent name:\t%s",p.sname);
    printf("\nstudent marks for subject1:\t%d",p.mk1);
    printf("\nstudent marks for subject2:\t%d",p.mk2);
    return 0;
}
