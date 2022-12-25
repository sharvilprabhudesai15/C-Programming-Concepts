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
    {   printf("enter the record number of the record which has to be read\n");
        scanf("%d",&n);
        fseek(fp,(n-1)*sizeof(stud),0);
        fread(&stud,sizeof(stud),1,fp);
        printf("%d  %s\n",stud.rollno,stud.name);
        fclose(fp) ;
    }
    return 0;
}
