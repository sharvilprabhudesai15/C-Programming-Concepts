#include <stdio.h>

int main()
{   float salary=35678;
    int age=36;
    int *a;
    float *b;
    a=&age;
    b=&salary;
    printf("age=%d\tsalary=%f\n",age,salary);
    printf("value of a:%u\n",a);
    printf("value of b:%u\n",b);
     printf("\nvalue of &a:%u\n",&a);
    printf("value of &b:%u\n",&b);
    return 0;
}
