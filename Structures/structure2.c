#include <stdio.h>
/*
struct struct_name
{ datatype struct_membername;
  datatype struct_membername;
  ...
}struct_varname;
*/
//struct_var.struct_membername
struct employee
{ int eid;
  char ename[50];
}
s1={123,"john"};

int main()
{   printf("employee1 details\n:");
    printf("%d\n",s1.eid);
    printf("%s\n",s1.ename);
    return 0;
}
