#include <stdio.h>
int main(void)
{   int n;
    void printSquare(int n);//function declaration
    printf("enter a number:\n");
    scanf("%d",&n);
    printSquare(n);             //function call
    printf("Main\n");
    return 0;
}

 void printSquare(int n)
    {   printf("square of a %d:%d\n",n,(n*n)); }
