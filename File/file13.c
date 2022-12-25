#include <stdio.h>
struct student
{   int rollno;
    char name[20];
}stud;
int main()
{   int i=0,n;
    FILE *fp ;
    fp = fopen("stud1.txt", "r+") ;
    if ( fp == NULL )
    { printf( "stud.txt file failed to open." );}
    else
    {   printf("file pointer position in the beginning:%d\n",ftell(fp));
        printf("enter the record number of the record which has to be read\n");
        scanf("%d",&n);
        fseek(fp,(n-1)*sizeof(stud),0);
        printf("file pointer position :%d\n",ftell(fp));
        rewind(fp);
        printf("file pointer position after rewind :%d\n",ftell(fp));
        fclose(fp) ;
    }
    return 0;
}
