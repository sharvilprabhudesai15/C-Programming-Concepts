#include <stdio.h>

int main()
{   int i,n;

    for(i=0;i<10;i++)
    {   printf("enter a no less than or equal to 100:\n");
        scanf("%d",&n);
        if(n>100)
        {
            printf("you have entered a number greater than 100\n");
            break;
        }
    }
    return 0;
}
