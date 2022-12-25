#include<stdio.h>

void swap(int *a,int *b)//a=&p,b=&q
{   int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{   int p=3,q=4;
    printf("before swapping:p=%d\tq=%d\n",p,q);
    swap(&p,&q);
    printf("\nafter swapping:p=%d\tq=%d\n",p,q);
    return 0;
}
