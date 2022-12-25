#include <stdio.h>

int sumOfDigits(int n)
{  if(n==0)
   { return 0;}
   else
   {  return (n%10)+sumOfDigits(n/10);  }
}

int main()
{   printf("no of digits for 123:%d",sumOfDigits(123));
    return 0;
}
