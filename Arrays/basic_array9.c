//sum of squares
#include <stdio.h>
int sumOfSquares(int a[],int n)
{   int sum=0;
    for(int i=0;i<n;i++)
    {   sum=sum+(a[i]*a[i]);  }
    return sum;
}

int main()
{   int a[50],n,i;
    printf("enter the no of elements to be stored in array \n");
    scanf("%d",&n);
    printf("enter %d nos\n",n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    printf("\nsum of squares:%d\n",sumOfSquares(a,n));
    return 0;
}
