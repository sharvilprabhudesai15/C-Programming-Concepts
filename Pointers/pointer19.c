#include <stdio.h>
//array of pointers
//datatype *pointername[subscript];
int main()
{   int arr[3] [4]={{10,11,12,13}, {20,21,22,23}, {30,31,32,33}};
    int *pa[3];
    for(int i=0;i<3;i++)
	{   pa [i] =arr [i] ;
        printf("pa[%d]=%d \t arr[%d]=%d\n",i,pa[i],i,arr[i]);
	    for(int j=0;j<4;j++)
	    {   printf("%d\t",*((pa[i])+j));
	    }
	    printf("\n");
	}
	return 0;
}
