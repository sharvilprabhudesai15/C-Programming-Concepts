#include <stdio.h>

int cntOfDigits(int n)
{   static int cnt=0;
     if(n!=0)
    {  cnt++;
       cntOfDigits(n/10);
    }
    return cnt;
}

int main()
{   printf("no of digits for 123:%d",cntOfDigits(123));
    return 0;
}
