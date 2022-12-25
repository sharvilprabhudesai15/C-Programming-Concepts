#include <stdio.h>
//address operator &
int main()
{   float salary=35678;
    int age=36;
    printf("age=%d\tsalary=%f\n",age,salary);
    printf("Address of age variable:%u\n",&age);
    printf("Address of salary variable:%u\n",&salary);
    return 0;
}
