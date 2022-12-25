#include <stdio.h>

int main()
{   int n,fact=1;
    printf("enter a number \n");
    scanf("%d",&n);
    if(n==0)
    { printf("fact=1");}
    else if(n==1)
    { printf("fact=1");}
    else
    {   while(n>=1)
        {   fact=fact*n;
            n--;
        }
         printf("fact:%d\n",fact);
    }

    return 0;
}
