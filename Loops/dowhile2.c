#include <stdio.h>

int main()
{   int cnt=0,sum=0,n,drev=0,prod=1,rem=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n>0)
    {   do
        {   rem=n%10;
            sum+=rem;
            prod*=rem;
            drev=drev*10+rem;
            cnt++;
            n=n/10;
        }
        while(n>0);
        printf("sum of digits:%d\n",sum);
        printf("product of digits:%d\n",prod);
        printf("reverse of digit:%d\n",drev);
        printf("no of digits:%d\n",cnt);
    }
    else
    {
        printf("number is less or equal to zero");
    }
    return 0;
}


