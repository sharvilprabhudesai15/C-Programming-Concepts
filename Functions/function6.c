#include <stdio.h>
int maxOfTwo(int,int); //function declaration

int main()
{   int n1,n2,result=0;
    printf("enter two nos:\n");
    scanf("%d%d",&n1,&n2);
    result=maxOfTwo(n1,n2);//function call
    if(result==-1)
    {   printf("both nos are equal\n");}
    else
    {   printf("max of %d and %d is %d",n1,n2,result); }
    return 0;
}
//function definition
int maxOfTwo(int x,int y)           //function header
{   int max=-1;
    if(x>y)
    {   max=x;
        return max ;
    }
    else if(x==y)
    { return max;
    }
    else
    {    max=y;
         return max ;
    }
}
