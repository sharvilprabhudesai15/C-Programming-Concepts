//sum of n natural nos using recursion
#include <stdio.h>

int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}

int main()
{   int n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("sum of %d nos=%d",n,sum(n));
    return 0;
}
