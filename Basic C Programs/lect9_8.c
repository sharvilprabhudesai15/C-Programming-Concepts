#include <stdio.h>

int main()
{   char c;
    printf("enter a character\n");
    scanf("%c",&c);
    switch(c)
    {   case 'A' ... 'Z':
        {   printf("%c is in the range A to Z\n",c);
            break;
        }
         case 'a' ... 'z':
        {   printf("%c is in the range a to z\n",c);
            break;
        }
        default:
        {   printf("invalid character");
            break;
        }
    }
    return 0;
}
