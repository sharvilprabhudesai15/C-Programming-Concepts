//concept of function pointer
//returntype (*functnptrname)(arglist_datatype)
#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

int main()
{
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun;
    (*fun_ptr)(10);//(*functionptrname)(arglist)

    return 0;
}
