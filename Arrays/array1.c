#include <stdio.h>

int main()
{   int arr[2][3];//datatype arrayname[rows][columns]
    int i,j;
    //reading input for array
    printf("enter 6 nos\n");
    for(i=0;i<2;i++)//outer loop to iterate through the rows
    {   printf("row %d\n",(i+1));
        for(j=0;j<3;j++)// inner loop to iterate column elements
        {   printf("arr[%d][%d]:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("array contains:\n");
    for(i=0;i<2;i++)
    {   printf("row %d\n",(i+1));
        for(j=0;j<3;j++)
        {
            printf("arr[%d][%d]:%d\n",i,j,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
