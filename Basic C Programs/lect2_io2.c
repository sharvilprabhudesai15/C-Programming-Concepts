#include <stdio.h>

int main()
{   int num1,num2,num3;
    float sum;
    printf("enter three nos");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    sum=(num1+num2+num3)/3;
    printf("average of 3 nos: %d,%d,%d is %f",num1,num2,num3,sum);
    return 0;
}
