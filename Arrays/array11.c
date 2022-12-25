#include <stdio.h>
int main()
{   int m,n,p,q,i,j,k;
    printf("enter no of rows and columns for array a\n");
    scanf("%d%d",&m,&n);
    printf("enter no of rows and columns for array b\n");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q],c[m][q];
    printf("enter %d nos for array a\n",(m*n));
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   scanf("%d",&a[i][j]);   }
    }
    printf("enter %d nos for array b\n",(p*q));
    for(i=0;i<p;i++)
    {   for(j=0;j<q;j++)
        {   scanf("%d",&b[i][j]);   }
    }
     printf("\noriginal matrix a:\n");
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   printf("%d\t",a[i][j]);     }
        printf("\n");
    }
    printf("\noriginal matrix b:\n");
    for(i=0;i<p;i++)
    {   for(j=0;j<q;j++)
        {   printf("%d\t",b[i][j]); }
        printf("\n");
    }
    if(n==p)
    {   for(i=0;i<m;i++)
        {   for(j=0;j<q;j++)
            {   c[i][j]=0 ;
                for(k=0;k<n;k++)
                {   c[i][j]+=a[i][k]* b[k][j]; }
            }
        }
        printf("\nproduct of matrix a and b:\n");
        for(i=0;i<m;i++)
        {   for(j=0;j<q;j++)
            {   printf("%d\t",c[i][j]); }
            printf("\n");
        }
    }
    else
    {   printf("\nmatrix a and b cannot be multiplied\n"); }
    return 0;
}
/*
output
enter no of rows and columns for array a
2
3
enter no of rows and columns for array b
3
2
enter 6 nos for array a
1
1
1
1
1
1
enter 6 nos for array b
1
1
1
1
1
1
original matrix a:
1       1       1
1       1       1
original matrix b:
1       1
1       1
1       1
product of matrix a and b:
3       3
3       3
*/
