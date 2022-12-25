#include <stdio.h>

int main()
{   int a=3,b=7,c=2;
    printf("a=%d\t b=%d \t c=%d\n",a,b,c);
    printf("(a>b)&&(a>c)=%d\n",(a>b)&&(a>c));
    printf("(a>b)||(a>c)=%d\n",(a>b)||(a>c));
    printf("!a=%d\n",(!a));
    return 0;
}
