//local variables
#include <stdio.h>

void printVar1()
{   int a=8,b=5;
    printf("printVar1():a=%d,b=%d\n",a,b);
}

void printVar2()
{   int a=4,b=3;
    printf("printVar2():a=%d,b=%d\n",a,b);
}

int main()
{   printVar1();
    printVar2();
    return 0;
}
