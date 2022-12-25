#include <stdio.h>
//pointer to pointer concept
int main()
{   int a = 5, *ptr1 = &a;
    int **ptr2=&ptr1;
    printf("\n address of variable a:%u",&a);
    printf("\nvalue of ptr1 =%u",ptr1);
    printf("\nvalue of *ptr1 =%u",*ptr1);
    printf("\naddress of ptr1:%u",&ptr1);
    printf("\nvalue of ptr2=%u",ptr2);
    printf("\nvalue of *ptr2=%u",*ptr2);
    printf("\nvalue of **ptr2=%u",**ptr2);
    return 0;
}
