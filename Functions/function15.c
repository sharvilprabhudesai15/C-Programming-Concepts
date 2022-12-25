//example: function with return type and arguments
#include <stdio.h>

int sumofDigits(int); //function declaration

int main()
{   int n,result=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    result=sumofDigits(n);//function call result=sum
    printf("sum of digits for no %d is %d",n,result);
    return 0;
}

//function definition
int sumofDigits(int n)           //function header
{   int sum=0,rem=0;           // function body
    while(n>0)
    {  rem=n%10;
       sum+=rem;
       n=n/10;
    }
    return sum;// return expression
}
