#include <stdio.h>

int main()
{   int n,n1,sum=0;
    printf("enter a value for n \n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    { sum+=n;
      n--;
    }
    printf("sum of %d natural nos=%d",n1,sum);
    return 0;
}
