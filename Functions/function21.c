//global variables
#include <stdio.h>
int a,b=5;
void printVar1()
{
    printf("printVar1():a=%d,b=%d\n",a,b);
}

void printVar2()
{   int a=2,b=3;
    printf("printVar2():Square(a)=%d,cube(b)=%d\n",a*a,b*b*b);
}

int main()
{   printVar1();
    printVar2();
    return 0;
}
