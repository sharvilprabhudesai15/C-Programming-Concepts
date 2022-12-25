#include <stdio.h>
int* getarray()
{
    static int arr[5];
    printf("Enter the elements in an array : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n%u\n:",arr);
    return arr;
}
int main()
{
  unsigned int *n;
  n=getarray();
  printf("\n%u\n:",n);
  for(int i=0;i<5;i++)
    {
        printf("%d", *(n+i));
    }
    return 0;
}
