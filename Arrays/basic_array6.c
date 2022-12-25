//min and max in  array
#include <stdio.h>

int main()
{   int a[50],n,i,min,max;
    printf("enter the no of elements to be stored in array\n");
    scanf("%d",&n);
    printf("enter %d nos\n",n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    min=max=a[0];
    for(i=0;i<n;i++)
    {   if(a[i]<min)
        {   min=a[i]; }
        if(a[i]>max)
        {   max=a[i]; }
    }
    printf("min=%d \t max=%d\n",min,max);
    return 0;
}
