#include<stdio.h>
#include<math.h>
int main()
{   int i,num, flag=1;
    printf ("Enter a number\n ") ;
    scanf("%d",&num) ;
    for(i=2;i<=sqrt(num);i++)
    {   printf("i=%d\n",i);
        if (num%i==0)
        {   printf("%d is not prime\n",num);
            flag=0;
            break;
        }
    }
    if (flag==1)
    {   printf ("%d is prime\n", num) ;}
    return 0;
}

output
Enter a number
 11
i=2
i=3
11 is prime
