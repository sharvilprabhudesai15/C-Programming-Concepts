#include <stdio.h>

int main()
{   int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0)
    {   printf("%d is a positive number",a);
    }
    else
    {
        printf("%d is a negative number",a);
    }
    return 0;
}

//output
//enter a number
//-6
//-6 is a negative number
