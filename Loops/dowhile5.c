#include <stdio.h>

int main()
{   int n,a=0,b=1,c,cnt=3;
    printf("enter the no of elements for fibonacci series\n");
    scanf("%d",&n);
    if(n==1)
    {   printf("%d\t",a);   }
    if(n>=2)
    {   printf("%d\t%d\t",a,b);
        do
        {   c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;
            cnt++;
        }while(cnt<=n);
    }
    return 0;
}
