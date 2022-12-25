#include <stdio.h>

int main()
{   int n,rem,sum=0,cnt=0,prod=1,drev=0;
    printf("Enter a number\n ");
    scanf("%d",&n) ;
    for(;n>0;n/=10)
    {   rem=n%10;
        sum+=rem;
        prod*=rem;
        drev=drev*10+rem;
        cnt++;
    }
    printf("\n sum of digits:%d\n",sum);
    printf("\n product of digits:%d\n",prod);
    printf("\n number of digits:%d\n",cnt);
    printf("\n reverse of digits:%d\n",drev);
    return 0;
}
