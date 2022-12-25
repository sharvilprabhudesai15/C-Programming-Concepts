#include <stdio.h>

void genNaturalNumberSeries(int n);

int main()
{   int n;
    printf("enter a value for n \n");
    scanf("%d",&n);
    printf("generating series of natural numbers from 1 to %d \n",n);
    genNaturalNumberSeries(n);
    return 0;
}

void genNaturalNumberSeries(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d \t",i);
    }
}
