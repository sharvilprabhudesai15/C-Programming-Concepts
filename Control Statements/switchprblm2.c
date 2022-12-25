#include <stdio.h>

int main()
{   char op;
    printf ("Enter an alphabet\n ") ;
    scanf ("%c", &op) ;
    switch(op)
    {   case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("the alphabet %c is a vowel\n",op);
            break;
        case '0'...'9':
            printf("you have entered a number\n");
            break;
        default:
            printf("the alphabet %c is a consonant",op);
            break;
    }
}
