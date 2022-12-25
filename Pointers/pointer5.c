#include <stdio.h>
//* -value at the address
int main()
{   float salary=35678;
    int age=36;
    int *a;
    float *b;
    a=&age;
    b=&salary;
    (*a)++;
    (*b)++;
    printf("age=%d\tsalary=%f\n",*a,*b);
    printf("age=%d\tsalary=%f\n",age,salary);//*a-*(address of the age variable)
    return 0;
}
