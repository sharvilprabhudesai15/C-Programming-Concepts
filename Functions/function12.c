//Function With No Arguments But A Return Value
#include <stdio.h>
int sumofSquaresOdd(void); //function declaration

int main()
{   printf("sum of squares for odd nos is %d",sumofSquaresOdd());
    return 0;
}
//function definition
int sumofSquaresOdd(void)           //function header
{   int n,sum=0,prod=1;
    printf("enter the number of n nos:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {  if(i%2!=0)
       {    prod=i*i;
            sum+=prod;
       }
    }
    return sum;
}
