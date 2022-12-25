//array of structures
#include <stdio.h>
#include <string.h>
struct student
{ int sid,mk1,mk2;
  char sname[50];
};
//struct struct_name struct_arrayname[size];
int main()
{   struct student s[2];
    printf("enter the details of each student\n");
    for(int i=0;i<2;i++)
    {   printf("\nenter the details of student%d:\n",(i+1));
        printf("enter student id:\t");
        scanf("%d",&s[i].sid);
        printf("enter student name:\t");
        scanf("%s",s[i].sname);
        printf("enter student marks for subject1:\t");
        scanf("%d",&s[i].mk1);
        printf("enter student marks for subject2:\t");
        scanf("%d",&s[i].mk2);
    }
    for(int i=0;i<2;i++)
    {   printf("\n details of student%d:\n",(i+1));
        printf("\nstudent id:\t%d",s[i].sid);
        printf("\nstudent name:\t%s",s[i].sname);
        printf("\nstudent marks for subject1:\t%d",s[i].mk1);
        printf("\nstudent marks for subject2:\t%d",s[i].mk2);
    }
    return 0;
}
