#include <stdio.h>

int main()
{   int a=3,b=7;
    printf("a&b=%d\n",(a&b));  //0011
                             //0111
                        // & -------
                        //     0011
     printf("a|b=%d\n",(a|b));  //0011
                             // 0111
                          // | -------
                        //      0111
     printf("a^b=%d\n",(a^b));  //0011
                             // 0111
                        // ^ -------
                        //      0100
    printf("~a=%d\n",(~a));
     printf("a<<2=%d\n",(a<<2));  //0011
                            //-------
                            // 1100
     printf("a>>2=%d\n",(a>>2));  //0011
                            //-------
                            // 1100
    return 0;
}


