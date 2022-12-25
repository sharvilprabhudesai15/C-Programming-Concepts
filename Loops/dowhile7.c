#include<stdio.h>
int main()
{   int num, sum=0;
    do
    {   printf ("Enter a number (-1 to stop):");
        scanf("%d",&num) ;
        if(num!=-1)
        {   sum+=num;   }
    }while (num!=-1) ;
    printf ("Sum is %d\n", sum) ;
    return 0;
}

/*output
Enter a number (-1 to stop):1
Enter a number (-1 to stop):2
Enter a number (-1 to stop):3
Enter a number (-1 to stop):-1
Sum is 6*/
