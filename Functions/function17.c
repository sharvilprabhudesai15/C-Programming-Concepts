#include <stdio.h>

void numberPalindrome(int n)
{  int num,rev=0,rem=0;
   num=n;
   while(n>0)
   { rem=n%10;
     rev=rev*10+rem;
     n=n/10;
   }
   printf("reverse of %d is %d\n",num,rev);
   if(rev==num)
   { printf("%d is a palindrome\n",num);}
   else
   {    printf("%d is not a palindrome\n",num);}
}

int main()
{   numberPalindrome(123);
    return 0;
}
