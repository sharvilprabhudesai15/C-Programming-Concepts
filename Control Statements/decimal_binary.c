#include <stdio.h>
#include <math.h>
int main()
{   int n,rem,a[10],cnt=0;

    printf("Enter the number in decimal\n");
    scanf ("%d", &n) ;

    while (n>0)
    {   rem=n%2;
        n/=2;
        a[cnt]=rem;
        cnt++;
    }
     printf("number in binary\n");
    while(cnt>0)
    {   printf("%d",a[cnt-1]);
        cnt--;
    }
    return 0;
}
