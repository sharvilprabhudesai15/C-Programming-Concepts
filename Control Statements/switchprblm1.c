#include <stdio.h>

int main()
{   char op;
    int a,b;
    printf ("Enter number operator and another number ") ;
    scanf ("%d%c%d", &a, &op, &b) ;
    switch(op)
    {   case '+':
            printf("result:%d",(a+b));
            break;
        case '-':
            printf("result:%d",(a-b));
            break;
        case '*':
        case 'x':
            printf("result:%d",(a*b));
            break;
        case '/':
            printf("result:%d",(a/b));
            break;
        default:
            printf("invalid operator\n");
            break;
    }
}
