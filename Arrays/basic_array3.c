#include<stdio.h>

int main()
{   int a[30],n,cnt=0;
    printf("enter the no elements in an Array\n");
    scanf("%d",&n);
    printf("enter %d nos\n",n);
    for(int i=0;i<n;i++)
    {   scanf("%d",&a[i]);
        if(a[i]%3==0){cnt++;}
    }
    printf("no of multiples of 3=%d\n",cnt);

    return 0;
}
