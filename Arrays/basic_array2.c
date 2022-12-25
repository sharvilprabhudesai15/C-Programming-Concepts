#include<stdio.h>

int main()
{   int a[30],n;
    printf("enter the no elements in an Array\n");
    scanf("%d",&n);
    printf("enter %d nos\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //print array
    printf("saved array\n");
     for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
