#include <stdio.h>

int main()
{ char op;
  int a,b;
  printf("enter the arithmetic expression eg. a + b\n");
  scanf("%d %c %d",&a,&op,&b);
  if(op=='+')
  { printf("sum=%d\n",(a+b));
  }
   if(op=='-')
  { printf("diff=%d\n",(a-b));
  }
   if(op=='*')
  { printf("prod=%d\n",(a*b));
  }
   if(op=='/')
  { printf("quotient=%f\n",(a/(float)b));
  }
  return 0;
}
