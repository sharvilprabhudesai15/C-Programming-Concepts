#include <stdio.h>
int a,b=5;
int fact(int n)
{   if(n==0)
    {   return 1;}
    else
    { return n*fact(n-1);
    }
}

int main()
{   int n;
    printf("enter a number \n");
    scanf("%d",&n);
    printf("factorial of  %d is %d",n,fact(n));
    return 0;
}
