//sum of squares
#include <stdio.h>
void seniorCitizenEligibility(int a[],int n)
{   int sum=0;
    for(int i=0;i<n;i++)
    {    if(a[i]>=60)
         {  printf("person %d: eligible for senior citizenship\n",(i+1));
         }
         else
         {  printf("person %d: not eligible for senior citizenship\n",(i+1));
         }
    }
}

int main()
{   int a[50],n,i;
    printf("enter the no of people whose eligibility for senior citizen has to be determined: \n");
    scanf("%d",&n);
    printf("enter the age for %d people\n",n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    seniorCitizenEligibility(a,n);
    return 0;
}
