#include <stdio.h>

int main()
{   float m1,m2;
    int op;
    printf ("Enter the operands a and b:\n");
    scanf ("%f%f" ,&m1,&m2) ;
    printf("\n enter 1 to add two nos\n");
    printf("\n enter 2 to subtract two nos\n");
    printf("\n enter 3 to multiply two nos\n");
    scanf("%d",&op);
    switch(op)
    {   case 1:
        {   printf("sum=%f",(m1+m2));
            break;
        }
        case 2:
        {   printf("diff=%f",(m1-m2));
            break;
        }
        case 3:
        {   printf("prod=%f",(m1*m2));
            break;
        }
        default:
            printf("invalid input");
    }
    return 0;
}
