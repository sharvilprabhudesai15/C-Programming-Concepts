#include <stdio.h>
int main()
{   int m,n,i,j;
    printf("enter no of rows and columns\n");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("enter %d nos\n",(m*n));
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   scanf("%d",&a[i][j]);   }
    }
    printf("original array:\n");
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   printf("%d\t",a[i][j]); }
        printf("\n");
    }
    //COMPUTING THE TRANSPOSE
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   b[j][i]=a[i][j];    }
    }
    printf("transpose of array:\n");
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        {   printf("%d\t",b[i][j]); }
        printf("\n");
    }
}

