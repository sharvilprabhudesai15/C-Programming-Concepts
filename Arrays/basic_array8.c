//multiply scalar
#include <stdio.h>
//returntype func_name(datatype arrayname[],int size[optional],...optional arguments)
void multiplyScalar(int a[],int n,int m)
{   for(int i=0;i<n;i++)
    {   a[i]=a[i]*m;  }
}

int main()
{   int a[50],n,i,m;
    printf("enter the no of elements to be stored in array and the scalar value\n");
    scanf("%d %d",&n,&m);
    printf("enter %d nos\n",n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    printf("\nmodified array\n");
    //arrayname contains address of the first element in array
    multiplyScalar(a,n,m);
    for(i=0;i<n;i++)
    {   printf("%d\t",a[i]);
    }
    return 0;
}
