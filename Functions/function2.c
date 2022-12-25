#include <stdio.h>

void drawLine(); //function declaration

int main()
{   drawLine();//function call
    return 0;
}

//function definition
void drawLine()    //function header
{                  // function body
    for(int i=0;i<80;i++)
    {   printf("-");
    }
    printf("\n");
}
