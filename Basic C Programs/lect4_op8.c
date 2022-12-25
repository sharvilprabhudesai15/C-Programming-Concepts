#include <stdio.h>

int main()
{
   int a=3,b=4,f;
   f=(++b) + (a++);
   printf("f=%d\n",f);
   return 0;
}
