#include <stdio.h>

int main()
{   int fact=1,n,k;
    printf("enter the number whose factorial has to be computed\n");
    scanf("%d",&n);
    if(n==0)
    {   printf("factorial of %d:1",n);}
    else if(n==1)
    {   printf("factorial of %d :1",n);}
    else
    {   k=n;
        do
        {   fact=fact*n;
            n=n-1;
        }while(n>=1);
        printf("factorial of %d :%d",k,fact);
    }
    return 0;
}
