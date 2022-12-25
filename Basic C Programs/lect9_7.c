#include <stdio.h>

int main()
{   int n;
    printf("enter a no\n");
    scanf("%d",&n);
    switch(n)
    {   case 0 ... 9:
        {   printf("%d is in the range 0 to 9\n",n);
            break;
        }
        default:
        {   printf("%d is not in the range 0 to 9\n",n);
            break;
        }
    }
    return 0;
}
