#include <stdio.h>
#include <string.h>
typedef struct employee
{ int eid;
  char ename[50];
}emp;//emp becomes data type

int main()
{   emp s1;
    s1.eid=103;
    strcpy(s1.ename,"John Smith");
    emp s2={104,"Jane Smith"};
    printf("employee1 details:\n");
    printf("%d\n",s1.eid);
    printf("%s\n",s1.ename);
    printf("%d\n",s2.eid);
    printf("%s\n",s2.ename);
    return 0;
}
