#include <stdio.h>

int main()
{   int i,j;
    printf("printing a matrix\n");
    for(i=0;i<3;i++)
    {   printf("row %d:\t",(i+1));
        for (j=0;j<4;j++)
        {   printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
