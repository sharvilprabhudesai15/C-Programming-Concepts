#include <stdio.h>

void oddEven(int); //function declaration

int main()
{   int n,result=0;
    printf("enter the number \n");
    scanf("%d",&n);
    oddEven(n);//function call
    return 0;
}

//function definition
void oddEven(int n)           //function header
{   if(n%2==0)
    {   printf("%d is an even no\n",n);}
    else
    {   printf("%d is an odd no",n);}
}
