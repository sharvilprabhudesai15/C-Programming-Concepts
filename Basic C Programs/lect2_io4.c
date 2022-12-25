#include <stdio.h>

int main()
{   const float PI=3.414;
    float area,rad;
    printf("enter the radius:");
    scanf("%f",&rad);
    area=PI*rad*rad;
    printf("area of a circle:%f",area);
    return 0;
}
