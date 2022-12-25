#include <stdio.h>

int main()
{   int n,num,sum=0;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("enter an even no\n");
        scanf("%d",&num);

        if(num%2!=0)
        {
            printf("no entered is an odd no\n");
            continue;
        }
        else
        {   n--;
            sum+=num;
        }
    }
    printf("sum of even nos is:%d\t",sum);
    return 0;
}
