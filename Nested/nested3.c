#include <stdio.h>

int main()
{      int n,sum,rem,num;
       printf("enter a number:\n");
       scanf("%d",&n);
       do
       {   num=n;
           for(sum=0;n!=0;n/=10)
            { rem=n%10;
              sum+=rem;
            }
            printf("sum of digits:%d\t num:%d\n",sum,num);
            n=sum;
       }while(n/10!=0);
    return 0;
}
