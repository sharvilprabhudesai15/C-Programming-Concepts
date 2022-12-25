#include <stdio.h>

struct employee
{ int eid;
  char ename[50];
};

int main()
{   struct employee s1,s2;
    printf("enter the employee id of two employees\n");
    scanf("%d %d",&s1.eid,&s2.eid);
    printf("enter the employee names of two employees");
    scanf("%s %s",s1.ename,s2.ename);
    printf("employee1 details\n:");
    printf("%d\n",s1.eid);
    printf("%s\n",s1.ename);
    printf("%d\n",s2.eid);
    printf("%s\n",s2.ename);
    return 0;
}
