//reverse array
#include <stdio.h>

int main()
{   int a[50],n,i,j,temp;
    printf("enter the no of elements to be stored in array\n");
    scanf("%d",&n);
    printf("enter %d nos\n",n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    for(i=0,j=n-1;i<j;i++,j--)
    {   temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        //printf("a[%d]=%d\ta[%d]=%d\n",i,a[i],j,a[j]);
    }
    for(i=0;i<n;i++)
    {   printf("%d\t",a[i]);
    }
    return 0;
}
