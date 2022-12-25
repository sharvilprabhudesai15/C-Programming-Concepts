#include <stdio.h>

int power(int a,int n)
{
    if(n==0)
        return 1;
    else
        return a*power(a,n-1);
}

int main()
{   printf("3^4=%d",power(3,4));
    return 0;
}
