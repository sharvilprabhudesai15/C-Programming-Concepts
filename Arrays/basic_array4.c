//even number series beginning from 2...n
#include<stdio.h>

int main()
{   int a[30],n,cnt=2;
    printf("enter the no elements in an Array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   a[i]=cnt;
        cnt=cnt+2;
    }
     printf("even number series: 2 to %d\n",n);
     for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
