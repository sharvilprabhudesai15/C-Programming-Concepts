#include <stdio.h>

int main()
{ int a=2,b=4,c=5;
  int r=(a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("largest no is:%d",r);
  return 0;
}
