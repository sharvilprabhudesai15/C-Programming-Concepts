#include <stdio.h>

void modifyArray(int arr[],int n)
{   for(int i=0;i<n;i++)
    { arr[i]=arr[i]*2;
    }
}

void modifyElement(int b)
{ b=b*2;
  printf("\nvalue of a[2] within function modifyElement:%d\n\n",b);
}

int main()
{   int a[]={1,2,3,4};
    printf("original array:\n");
    for(int i=0;i<4;i++)
    {   printf("%d\n",a[i]); }
    modifyArray(a,4);
    modifyElement(a[2]);
    printf("\nmodified array:\n");
    for(int i=0;i<4;i++)
    {   printf("%d\n",a[i]); }
    printf("\nmodified array element a[2]:\n");
    printf("%d\n",a[2]);
}
