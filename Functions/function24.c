#include <stdio.h>

void sumOfOdd(int n);

int main()
{   int n;
    printf("enter a value for n \n");
    scanf("%d",&n);
    printf("generating sum of odd numbers from 1 to %d \n",n);
    sumOfOdd(n);
    return 0;
}

void sumOfOdd(int n)
{   int sum=0;
    for(int i=1;i<=n;i++)
    {   if(i%2!=0){sum+=i;}
    }
    printf("sum=%d",sum);
}
