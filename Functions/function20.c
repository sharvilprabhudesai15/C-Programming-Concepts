//static variables
#include <stdio.h>
void printVar1()
{   static int cnt=0;//executed only once
    cnt++;
    printf("printVar1() visited %d times\n",cnt);
}

int main()
{   char ch;
    printf("do you want invoke printVar1() function: enter y/n \n");
    fflush(stdin);
    scanf("%c",&ch);
    while(ch!='n')
    {  printVar1();
       printf("do you want invoke printVar1() function: enter y/n \n");
       fflush(stdin);
       scanf("%c",&ch);
    }
    return 0;
}
