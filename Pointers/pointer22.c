//function pointer as a function argument
#include <stdio.h>

void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

void wrapper(void (*fun)())
{
    fun();
}

int main()
{
    wrapper(fun1);//fun=&fun1
    wrapper(fun2);//fun=&fun2
    return 0;
}
