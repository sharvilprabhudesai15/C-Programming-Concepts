//passing 2d arrays to functions: only one dimension are global variables
#include <stdio.h>
const int N = 3;

void print(int arr[][N], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
    {   for (j = 0; j < N; j++)
        {   printf("%d \t", arr[i][j]); }
        printf("\n");
    }
}

int main()
{
    int arr[][3] = {{1, 2}, {4, 5, 6}, {7, 8, 9}};
    print(arr, 3);
    return 0;
}

