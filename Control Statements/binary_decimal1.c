#include <stdio.h>

int main()
{   int n,nsave,rem,d,j=1,dec=0;
    printf("Enter the number in binary\n");
    scanf ("%d", &n) ;
    nsave=n;
    while (n>0)
    {   rem=n%10;
        d=rem*j;
        dec+=d;
        j*=2;
        n/=10; /*skipping last digit*/
        printf("\nrem=%d,n=%d,d=%d,dec=%d,j=%d",rem,n,d,dec,j);
    }
    printf("\nBinary number = %d, Decimal number = %d\n",nsave,dec);
    return 0;
}
