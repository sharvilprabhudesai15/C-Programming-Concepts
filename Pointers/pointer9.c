#include <stdio.h>
//implementation of an array as a pointer
int main()
{  int a []={1,2,3,4};
for(int i=0;i<4;i++)
{ printf("address(a+%d)= %u \t a[%d]=%d\n",i,(a+i),i,*(a+i));//a[i] --*(a+i)--*(base address+incr)
}
    return 0;
}
