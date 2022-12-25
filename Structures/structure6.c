//sizeof
#include <stdio.h>
#include <string.h>
struct employee
{ int eid;
  int id;
  char ename[50];
};

int main()
{
   struct employee s1;
    s1.eid=103;
    strcpy(s1.ename,"John Smith");

    struct employee s2={104,"Jane Smith"};
    printf("employee1 details\n:");
    printf("%d\n",s1.eid);
    printf("%s\n",s1.ename);
    printf("%d\n",s2.eid);
    printf("%s\n",s2.ename);
    printf("size of struct employee:%u\n",sizeof(struct employee));
    printf("size of s1:%u",sizeof(s1));
    return 0;
}
