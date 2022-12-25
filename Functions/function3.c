#include <stdio.h>
//functions declarations are not used as functions are defined before main

//function definition
int sum(int a,int b)    //function header  a and b are formal arguments a=p,b=q
{   int result= a+b;    // function body result local variable
    return result;
}
int product(int a,int b)    //function header
{   int result= a*b;    // function body
    return result;
}
int diff(int a,int b)    //function header
{   int result= a-b;    // function body
    return result;
}
int quotient(int a,int b)    //function header
{   int result= a/b;    // function body
    return result;
}
int main()
{   int p,q,op,op1;
    printf("enter 2 nos\n");
    scanf("%d%d",&p,&q);
    printf("enter 6 to do computation ,7 to stop\n");
    scanf("%d",&op);
    while(op!=7)
    {   printf("enter 1 for addition\n");
        printf("enter 2 for subtraction\n");
        printf("enter 3 for multiplication\n");
        printf("enter 4 for division\n");
        scanf("%d",&op1);
        switch(op1)
        {  case 1:
              printf("result=%d\n",sum(p,q)); //function call p and q are  actual arguments
              break;
           case 2:
               printf("result=%d\n",diff(p,q));
              break;
           case 3:
               printf("result=%d\n",product(p,q));
              break;
           case 4:
               printf("result=%d\n",quotient(p,q));
              break;
           default:
              printf("invalid option");
              break;
        }
        printf("enter 6 to do computation ,7 to stop\n");
        scanf("%d",&op);
    }
    return 0;
}


