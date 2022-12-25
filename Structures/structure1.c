#include <stdio.h>

int main()
{   int eid1,eid2;
    char cname1[50],cname2[50];
    printf("enter the employee id of two employees\n");
    scanf("%d %d",&eid1,&eid2);
    printf("enter the employee names of two employees");
    scanf("%s %s",cname1,cname2);
    printf("employee1 details\n:");
    printf("%d\n",eid1);
    printf("%s\n",cname1);
    printf("%d\n",eid2);
    printf("%s\n",cname2);
    return 0;
}
