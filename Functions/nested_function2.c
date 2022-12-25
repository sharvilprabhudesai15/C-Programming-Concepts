//If you need to declare the nested function before its definition , use auto
#include <stdio.h>
int main(void)
{   int n;
    auto void printSquare(int n);//function declaration
    printf("enter a number:\n");
    scanf("%d",&n);
    printSquare(n);             //function call
    printf("Main\n");
                                //function definition
     void printSquare(int n)
    {   printf("square of a %d:%d\n",n,(n*n)); }

    return 0;
}
