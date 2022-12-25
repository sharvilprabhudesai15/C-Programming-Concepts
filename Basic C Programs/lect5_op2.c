#include <stdio.h>

int main()
{   int a=3,b=7;
    printf("a=%d\t b=%d\n",a,b);
    printf("(a>b)=%d\n",(a>b));
    printf("(a<b)=%d\n",(a<b));
    printf("(a==b)=%d\n",(a==b));
    printf("(a!=b)=%d\n",(a!=b));
    printf("(a>=b)=%d\n",(a>=b));
    printf("(a<=b)=%d\n",(a<=b));
    return 0;
}

//output
//a=3      b=7
//(a>b)=0
//(a<b)=1
//(a==b)=0
//(a!=b)=1
//(a>=b)=0
//(a<=b)=1
