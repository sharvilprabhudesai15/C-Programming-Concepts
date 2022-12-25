#include <stdio.h>
//pointer variable
//datatype *ptr_variable_name;
//ptr_variable_name=&variable_name;
int main()
{   float salary=35678;
    int age=36;
    int *a;
    float *b;
    a=&age;
    b=&salary;
    printf("age=%d\tsalary=%f\n",age,salary);
    printf("Address of age variable:%u\n",&age);
    printf("Address of salary variable:%u\n",&salary);
    printf("value of a:%u\n",a);
    printf("value of b:%u\n",b);
    return 0;
}
