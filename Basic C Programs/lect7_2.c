#include <stdio.h>

int main()
{   char c='X';
    long double a=2344555.6564,b;
    double d=45565.5,e;
    float f=45.3,g;
    unsigned long int h= 334343,i;

    printf("a+f=%Lf\n",(a+d));
    printf("d+f=%lf\n",(d+f));
    printf("h+f=%Ld",(h+f));
    return 0;
}
