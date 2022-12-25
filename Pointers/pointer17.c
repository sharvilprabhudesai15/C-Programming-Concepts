#include<stdio.h>
void print(int *p)
{   printf("within function\n");
    for(int i = 0; i < 3; i++)
    {   //printf("(p+%d)=%d\t",i,(p+i));
        for(int j = 0; j < 4; j++)
        {  // printf("\t(p+%d)+%d=%d\t",i,j,((p+i)+j));
            printf("\tarr[%d][%d]=%d\n", i, j,*((p+i*4) + j) );
        }
        printf("\n\n");
    }
}
int main()
{  int arr[3][4] = {    {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };
   print((int*)arr);
    return 0;
}
