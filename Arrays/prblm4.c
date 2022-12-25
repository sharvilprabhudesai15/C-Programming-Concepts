#include <stdio.h>
//#include <math.h>

void findAverageandSum(int a1[],int n)
{    float avg=0,sum=0;
     for(int i=0;i<n;i++)
     {  sum+=a1[i];}
     avg=sum/n;
     printf("sum: %f\n",sum);
     printf("average: %f",avg);
}

int main()
{  int a[50],n;
   printf("enter the number of elements\n");
   scanf("%d",&n);
   printf("enter the %d nos\n",n);
    for(int i=0;i<n;i++)
    {  scanf("%d",&a[i]);   }
    findAverageandSum(a,n);
    return 0;
}
