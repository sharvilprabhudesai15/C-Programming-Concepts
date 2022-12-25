#include <stdio.h>
//arguments passed by call by value
void swap(int a1,int b1)
{   printf("\n before swapping:a1=%d \t b1=%d",a1,b1);
    int t=a1;
    a1=b1;
    b1=t;
    printf("\nafter swapping:a1=%d \t b1=%d",a1,b1);
}

int main()
{   int a=12,b=18;
    swap(a,b);
    printf("\n within main():a=%d \t  b=%d",a,b);
    return 0;
}
