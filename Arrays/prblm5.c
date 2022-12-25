#include <stdio.h>
//#include <math.h>

void displayOddnos(int a1[],int n)
{    float avg=0,sum=0;
     for(int i=0;i<n;i++)
     { if(a1[i]%2!=0)
       {       printf("odd no:%d\n",a1[i]); }
     }
}

int main()
{  int a[50],n;
   printf("enter the number of elements\n");
   scanf("%d",&n);
   printf("enter the %d nos\n",n);
    for(int i=0;i<n;i++)
    {  scanf("%d",&a[i]);   }
    displayOddnos(a,n);
    return 0;
}
