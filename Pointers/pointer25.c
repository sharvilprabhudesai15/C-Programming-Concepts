#include<stdio.h>

int add(int *a,int *b)
{   int c=*a+*b;
    return c;
}

int main()
{   int p=3,q=4;
    printf("sum=%d\n",add(&p,&q));
    return 0;
}
