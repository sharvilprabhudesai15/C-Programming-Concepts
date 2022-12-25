#include <stdio.h>

void productOfThreeNos(int a,int b,int c)
{   printf("product of %d,%d and %d is %d",&a,&b,&c,(a*b*c));
}

int main()
{   productOfThreeNos(1,2);
    return 0;
}
