#include <stdio.h>

int factorial(int n) //function declaration
{   int fact=1;
    if(n==0)
    {   return fact;}
    else
    {   for(int i=1;i<=n;i++)
        { fact=fact*i; }
        return fact;
    }
}

int main()
{   int n,result=0;
    printf("enter a no:\n");
    scanf("%d",&n);
    result=factorial(n);//function call
    printf("factorial of %d is %d",n,result);
    return 0;
}

        //function header
