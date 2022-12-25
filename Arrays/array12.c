#include <stdio.h>
//BUBBLE SORT ALGORITHM IN ASCENDING ORDER
void sort_array(int arr[],int n)
{   for(int i=0;i<n-1;i++)
    {   for(int j=0;j<n-1;j++)
        {   if(arr[j]>arr[j+1])    //3,1,4,2,1
            {   int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void linearsearch(int arr[],int n,int x)
{   int flag=-1;
    for(int i=0;i<n-1;i++)
    {   if(arr[i]==x)
        {   printf("\nsearch element found at position:%d\n",(i+1));
            flag=i;
            break;
        }
    }
    if(flag==-1)
    {   printf("\nsearch element not found\n"); }
}
void binarysearch(int arr[],int n,int x)//ASSUMES DATA IS SORTED IN ASCENDING ORDER
{   int low = 0;
    int high = n - 1;
    int mid = (low+high)/2;
    while (low <= high)
    {   if(arr[mid] < x)
        {   low = mid + 1;} //search second half of array
        else if (arr[mid] == x)
        {   printf("\nsearch element found at position:%d\n",mid);
            break;
        }
        else
        {   high = mid - 1;}  //search first half of the array
        mid = (low + high)/2;
    }
    if(low > high)
    { printf("\nsearch element not found\n"); }
}

int main()
{   int n,x,y;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("\n enter %d nos\n",n);
    for(int i=0;i<n;i++)
    {   scanf("%d",&a[i]);  }
     printf("\n original array\n",n);
    for(int i=0;i<n;i++)
    {   printf("%d\n",a[i]); }
    sort_array(a,n);
     printf("\n sorted array\n",n);
    for(int i=0;i<n;i++)
    {   printf("%d\n",a[i]);
    }
    printf("enter search element for linear search\n");
    scanf("%d",&x);
    linearsearch(a,n,x);
    printf("enter search element for binary search\n");
    scanf("%d",&y);
    binarysearch(a,n,y);
    return 0;
}

/*enter the no of elements
5
enter 5 nos
1
2
56
23
12
 original array
1
2
56
23
12
sorted array
1
2
12
23
56
enter search element for linear search
12
search element found at position:3
*/
