//pointer arithmetic-addition
#include <stdio.h>
int main()
{   int a=3,x=0;
    int *ptr=&a;
    printf("\nptr=%u",ptr);
    printf("\n*ptr=%u",*ptr);
    x = *ptr++;//--------------------*(++ptr)  1)x=*(old ptrvalue)  2)ptr++
    printf("\nx=%u",x);
    printf("\n after [x = *ptr++]*ptr=%d",*ptr);
    ptr=&a;
    printf("\n\nptr=%u",ptr);
    printf("\n*ptr=%u",*ptr);
    x = *++ptr;//*(++ptr)
    printf("\nx=%u",x);
    printf("\nafter [x = *++ptr]*ptr=%d",*ptr);
    ptr=&a;
    printf("\n\nptr=%u",ptr);
    printf("\n*ptr=%u",*ptr);
    x = ++*ptr;//*ptr ---------------++(*ptr)
    printf("\nx=%u",x);
    printf("\n after [x = ++*ptr]*ptr=%d",*ptr);
    ptr=&a;
    printf("\n\nptr=%u",ptr);
    printf("\n*ptr=%u",*ptr);
    x =(*ptr)++;
    printf("\nx=%u",x);
    printf("\n*ptr=%d",*ptr);
    return 0;
}
/*
ptr=6356724
*ptr=3
x=3
 after [x = *ptr++]*ptr=6356728

ptr=6356724
*ptr=3
x=6356728
after [x = *++ptr]*ptr=6356728

ptr=6356724
*ptr=3
x=4
 after [x = ++*ptr]*ptr=4

ptr=6356724
*ptr=4
x=4
*ptr=5
*/
