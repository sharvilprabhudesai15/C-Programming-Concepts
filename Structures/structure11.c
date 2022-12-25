//passing structures to functions by address
#include <stdio.h>
#include <string.h>
typedef struct student
{ int sid,mk1,mk2;
  char sname[50];
}stud;

void modifyData(stud *s)//s=&p
{
    printf("enter the details of each student which has to be modified\n");
    printf("enter student id:\t");
    scanf("%d",&s->sid);
    printf("enter student name:\t");
    scanf("%s",s->sname);
    printf("enter student marks for subject1:\t");
    scanf("%d",&s->mk1);
    printf("enter student marks for subject2:\t");
    scanf("%d",&s->mk2);
}
int main()
{   stud p;
    printf("enter the details of each student\n");
    printf("enter student id:\t");
    scanf("%d",&p.sid);
    printf("enter student name:\t");
    scanf("%s",p.sname);
    printf("enter student marks for subject1:\t");
    scanf("%d",&p.mk1);
    printf("enter student marks for subject2:\t");
    scanf("%d",&p.mk2);
    modifyData(&p);
    printf("\nmodified details:\n");
    printf("\nstudent id:%d\t",p.sid);
    printf("\nstudent name:\t%s",p.sname);
    printf("\nstudent marks for subject1:\t%d\n",p.mk1);
    printf("\nstudent marks for subject2:\t%d",p.mk2);
    return 0;
}
