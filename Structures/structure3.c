#include <stdio.h>

struct employee
{ int eid;
  char ename[50];
};
struct employee s1={123,"john"};

int main()
{   printf("employee1 details\n:");
    printf("%d\n",s1.eid);
    printf("%s\n",s1.ename);
    return 0;
}
