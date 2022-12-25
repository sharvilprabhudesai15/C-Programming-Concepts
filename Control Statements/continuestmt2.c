#include<stdio.h>

int main ()
{   int i=1,n,sum=0;
    float avg;
    printf ("Enter 5 positive numbers\n") ;
    while(i<=5)
    {   printf("Enter a number\n");
        scanf( "%d", &n);
        if(n<0)
        {   printf ("Enter only positive numbers\n");
            continue;
        }
        sum+=n;
        i++;
    }
    avg=sum/5;
    printf ("Sum = %d Avg = %f\n", sum, avg) ;
    return 0;
}
