#include <stdio.h>

int main()
{   int i,n,term=1;
    int result=0;
    printf("Enter the number of terms\n ");
    scanf("%d",&n) ;
    for(i=1;i<=n;i++)
    {   printf("%d\t",term);
        term=term + i;
    }

    return 0;
}

/*output
Enter the number of terms
 5
1       2       4       7       11*/
