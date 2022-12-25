#include <stdio.h>
int size;

void insertElementAt(int a[],int x,int pos)
{   size=size+1;//increase the size of the array
    for(int i=size-1;i>pos-1;i--)
    {  a[i]=a[i-1]; }
    a[pos-1]=x;
}

void deleteElementAt(int a[],int pos)
{  for(int i=pos-1;i<size+1;i++)
    {  a[i]=a[i+1]; }
    size--;
}

void displayArray(int a[])
{   for(int i=0;i<size;i++)
    {   printf("a[%d]=%d\n",i,a[i]); }
    printf("\n");
}

int main()
{   int a[50],i;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter %d nos\n",size);
    for(i=0;i<size;i++)
    {   scanf("%d",&a[i]); }
    insertElementAt(a,3,2);
    printf("array after insertion\n");
    displayArray(a);
    deleteElementAt(a,1);
    printf("array after deletion\n");
    displayArray(a);
    return 0;
}
/*enter the size of the array
5
enter 5 nos
1
34
23
67
267
array after insertion
a[0]=1
a[1]=3
a[2]=34
a[3]=23
a[4]=67
a[5]=267

array after deletion
a[0]=3
a[1]=34
a[2]=23
a[3]=67
a[4]=267
*/
