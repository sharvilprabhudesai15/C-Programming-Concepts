#include <stdio.h>
int main()
{   int a,b,ch;
    printf ("Enter two nos\n") ;
    scanf ("%d%d", &a, &b) ;
    while(1)
    {   printf ("Enter 1 to add two nos\n") ;
        printf ("Enter 2 to subtract two nos\n") ;
        printf ("Enter 3 to multiply two nos\n") ;
        printf ("Enter 4 to divide two nos\n") ;
        printf ("Enter 5 to exit\n") ;
        scanf ("%d", &ch);
        switch(ch)
        {   case 1:
                printf("result:%d\n",(a+b));
                break;
            case 2:
                printf("result:%d\n",(a-b));
                break;
            case 3:
                printf("result:%d\n",(a*b));
                break;
            case 4:
                printf("result:%d\n",(a/b));
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("invalid  choice\n");
                break;
        }
    }
}
