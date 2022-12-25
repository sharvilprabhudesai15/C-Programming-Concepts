#include <stdio.h>

int main()
{   int arr[3][4] = {
                    {11,22,33,44},
                    {55,66,77,88},
                    {11,66,77,44}
                };
    for(int i=0;i<3;i++)
    {  // printf("(arr+%d)=%d \t *(arr+%d)=%d\n",i,(arr+i),i,*(arr+i));
        for(int j=0;j<4;j++)
        {  // printf("*(arr+%d)+%d=%d \n",i,j,(*(arr+i)+j));
            printf("a[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
        }
    }
    return 0;
}
