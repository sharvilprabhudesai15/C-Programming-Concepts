#include <stdio.h>
int main(void)
{   int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};//{{elements for row1},{elements for row2}}
    int i,j;
    printf("\nValues in array1: {{1, 2, 3}, {4, 5, 6}} by row are:\n");
    for(i=0;i<2;i++)
    {   printf("row %d:\t",(i+1));
        for(j=0;j<3;j++)
        {   printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    int array2[2][3] = {1, 2, 3, 4, 5};
    printf("\nValues in array2:{1, 2, 3, 4, 5} by row are:\n");
    for(i=0;i<2;i++)
    {   printf("row %d:\t",(i+1));
        for(j=0;j<3;j++)
        {   printf("%d\t",array2[i][j]); }
        printf("\n");
    }

    int array3[2][3] = {{1, 2}, {4}};
    printf("\nValues in array3:{{1, 2}, {4}} by row are:\n");
    for(i=0;i<2;i++)
    {   printf("row %d:\t",(i+1));
        for(j=0;j<3;j++)
        {   printf("%d\t",array3[i][j]);  }
        printf("\n");
    }
    return 0;
}
/*
Values in array1: {{1, 2, 3}, {4, 5, 6}} by row are:
row 1:  1       2       3
row 2:  4       5       6

Values in array2:{1, 2, 3, 4, 5} by row are:
row 1:  1       2       3
row 2:  4       5       0

Values in array3:{{1, 2}, {4}} by row are:
row 1:  1       2       0
row 2:  4       0       0
*/
