#include <stdio.h>
//pointer to one dimensional array
int main()
{   int a []={1,2,3,4};
    int *ptr=&a[0];//a,&a
    printf("base address of a=%u \t value of ptr=%u\n",a,ptr);
    for(int i=0;i<4;i++)
    {
        printf("(ptr+%d)=%u \t a[%d]=%d\n",i,(ptr+i),i,*(ptr+i));
    }
    return 0;
}
