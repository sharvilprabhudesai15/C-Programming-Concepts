#include <stdio.h>

int main()
{
    int a,b,sum=0;

    printf ("Enter two nos\n") ;
    scanf ("%d%d", &a, &b) ;
    while(a>=1)
    {   printf("a=%d\t b=%d\n",a,b);
        if(a%2!=0){sum+=b;}
        a=a/2;
        b=b*2;
    }
    printf("sum=%d\n",sum);
    return 0;
}
