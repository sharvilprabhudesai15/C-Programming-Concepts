#include <stdio.h>

int main()
{   int a,b,i;
    int result=0;
    printf("Enter two numbers to be multiplied ");
    scanf("%d%d",&a,&b) ;
    for(i=1;i<=b;i++)
    {   result=result+a;    }
    printf("%d * %d=%d\n",a,b,result);
    return 0;
}

/*output
Enter two numbers to be multiplied 2 3
2 * 3=6*/
