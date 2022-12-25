#include <stdio.h>
//#include <math.h>

void findAverage(int mks[],int n)
{    float avg=0,sum=0;
     for(int i=0;i<n;i++)
     {  sum+=mks[i];}
     avg=sum/n;
     printf("average marks: %f",avg);
}

int main()
{  int a[50],n;
   printf("enter the number of students\n");
   scanf("%d",&n);
   printf("enter the marks of %d student\n",n);
    for(int i=0;i<n;i++)
    {  scanf("%d",&a[i]);   }
    findAverage(a,n);
    return 0;
}
