#include <stdio.h>
int add(int *a,int *b,int n)
{  static int c[4];
   int *ptr3=c;
   for(int i=0;i<n;i++)
   { c[i]=*(b+i)+*(a+i);
     printf("c[%d]=%d\n",i,c[i]);
   }
   printf("value within function ptr3=%u\n",ptr3);
   return ptr3;
}
int main()
{   int a []={1,2,3,4};
    int b []={1,2,3,4};
    int *ptr1=a;
    int *ptr2=b;
    int *ptr3=add(ptr1,ptr2,4);
    printf("value within main function ptr3=%u\n",ptr3);
    printf("displaying array using pointer\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\n",ptr3[i]);
    }

    return 0;
}
