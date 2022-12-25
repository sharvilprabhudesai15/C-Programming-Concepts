#include <stdio.h>

int main()
{   int sum=0,n,num=0,cnt=0;
    printf("enter the no of elements whose is to be computed:\n");
    scanf("%d",&n);
    do
    {   printf("\n enter a number:\t");
        scanf("%d",&num);
        sum=sum+num;
        cnt++;
    }while(cnt<n);
    printf("\nsum of %d nos is %d ",n,sum);
    return 0;
}
