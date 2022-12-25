#include <stdio.h>

int main()
{   int f1=0,f2=1,f3,n,i;
    printf("Enter the number of terms\n ");
    scanf("%d",&n) ;
    if(n==1)
    { printf("%d\t",f1);
    }
    if(n>=2)
    {   printf("%d\t%d\t",f1,f2);
        for(i=2;i<n;i++)
        {   f3=f1+f2;
            printf("%d\t",f3);
            f1=f2;
            f2=f3;
        }
    }
    return 0;
}
/*output
Enter the number of terms
 5
0       1       1       2       3*/
