#include <stdio.h>
void addscalar(int *a,int n,int x)
{  for(int i=0;i<n;i++)
   { *(a+i)=*(a+i)+x;//a[i]=a[i]+x;
   }
}
int main()
{   int a []={1,2,3,4};
    int *ptr=&a;
    addscalar(ptr,4,3);
    printf("displaying array using pointer\n");
    for(int i=0;i<4;i++)
    {
        printf("a[%d]=%d\n",i,*(ptr+i));
    }
     printf("displaying array using ARRAY SUBSCRIPTS\n");
    for(int i=0;i<4;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}
