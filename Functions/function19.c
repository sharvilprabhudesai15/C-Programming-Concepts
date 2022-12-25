//global variables
#include <stdio.h>
int a,b=5;
void printVar1()
{
    printf("printVar1():a=%d,b=%d\n",a,b);
}

void printVar2()
{  printf("printVar2():Square(a)=%d,b+1=%d\n",a*a,++b);
  a=a+2;
  b++;
}

int main()
{   printVar1();
    printVar2();
    printf("printing global variables within main():a=%d,b=%d",a,b);
    return 0;
}
