#include <stdio.h>

int sumofNnos(int); //function declaration

int main()
{   int n,result=0;
    printf("enter the number of n nos:\n");
    scanf("%d",&n);
    result=sumofNnos(n);//function call result=sum
    printf("sum of %d nos is %d",n,result);
    return 0;
}

//function definition
int sumofNnos(int n)           //function header
{   int sum=0,num=0;           // function body
    printf("enter %d nos\n",n);
    for(int i=1;i<=n;i++)
    {  scanf("%d",&num);
       sum+=num;
    }
    return sum;// return expression
}
