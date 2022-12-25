#include <stdio.h>

int main()
{   float a;
    printf("enter your temperature in farenheit");
    scanf("%f",&a);
    if(a>99)
    {   printf("you have fever");
    }
    else
    {
        printf("you have no fever");
    }
    return 0;
}
