//Functions With No Arguments And No Return Value
#include <stdio.h>
//function definition
void classifyChar()    //function header  a and b are formal arguments a=p,b=q
{       char ch;
        printf("enter a  character (alphabet/number)\n");
       scanf("%c",&ch);
        switch(ch)
        {  case 'a':
           case 'e':
           case 'i':
           case 'o':
           case 'u':
              printf("%c is a vowel",ch);
              break;
           case '0'...'9':
              printf("%c is a number",ch);
              break;
           default:
              printf("%c is a consonant",ch);
              break;
        }
}
int main()
{
    classifyChar();
    return 0;
}


