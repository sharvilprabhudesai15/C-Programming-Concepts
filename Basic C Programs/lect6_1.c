#include <stdio.h>

int main()
{ int a,b,c;
  printf("enter the length for the 3 sides of a triangle");
  scanf("%d%d%d",&a,&b,&c);
  if((a==b)&&(b==c)&&(a==c))
  { printf("it is an equilateral triangle");
  }
  return 0;
}
