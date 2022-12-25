#include <stdio.h>

int main()
{   char c;
    printf("enter h to display herbivores\n");
    printf("enter c to display carnivores\n");
    printf("enter o to display omnivores\n");
    scanf("%c",&c);
    switch(c)
    {   case 'h':
        {   printf("herbivores:elephant,giraffe,deer\n");
            break;
        }
        case 'c':
        {   printf("carnivores:lion,tiger,leopard\n");
            break;
        }
        case 'o':
        {   printf("omnivores:bear,human\n");
            break;
        }
        default:
        {   printf("invalid option\n");
            break;
        }
    }
    return 0;
}
