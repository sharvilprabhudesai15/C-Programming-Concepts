#include <stdio.h>

int main()
{   int arr[2][2];
    int i,j;
    //reading input for array
    printf("enter 4 nos\n");
    for(i=0;i<2;i++)
    {   printf("row %d\n",(i+1));
        for(j=0;j<2;j++)
        {   printf("arr[%d][%d]:\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("array contains:\n");
    for(i=0;i<2;i++)
    {   printf("row %d\t",(i+1));
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

