#include <stdio.h>

int main()
{   int n,drev=0,rem=0;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n>0)
    { rem=n%10;
      n=n/10;
      drev=drev*10+rem;
    }
    printf("reverse number:%d\n",drev);
    return 0;
}
