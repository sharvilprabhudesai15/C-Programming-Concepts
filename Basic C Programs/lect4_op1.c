#include <stdio.h>

int main()
{ int a,b,c,d,e,f,g,h=4,i=3;;
   a=5;b=6;
   c=a+b;
   d=a-b;
   e=a*b;
   f=a/b;
   g=a%b;
   printf("c=%d\n",c);
   printf("d=%d\n",d);
   printf("e=%d\n",e);
   printf("f=%d\n",f);
   printf("g=%d\n",g);
   g=h%i;
   printf("g=%d\n",g);
   return 0;
}
