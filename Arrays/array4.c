#include <stdio.h>

int main(void)
{   int array1[2][3][4] = {
                            {   {1,1,1,1},
                                {1,1},
                                {1,1,1}
                            },
                            {   {1,1},
                                {1},
                                {1,1,1}
                            }
                         };
    int i,j,k;
    for(i=0;i<2;i++)
    {   for(j=0;j<3;j++)
        {   for(k=0;k<4;k++)
            {   printf("%d",array1[i][j][k]);}
            printf("\t\t");
        }
        printf("\n");
    }

    return 0;
}
/*

*/
