#include <stdio.h>
struct student
{   int rollno;
    char name[20];
}stud1;
int main()
{   int i=0,n;
    FILE *fp ;
    fp = fopen("stud1.txt", "r+") ;
    if ( fp == NULL )
    { printf( "stud.txt file failed to open." );}
    else
    {   printf("file pointer position in the beginning:%d\n",ftell(fp));
        while(fread(&stud1,sizeof(stud1),1,fp)==1)
        {   printf("%d  %s\n",stud1.rollno,stud1.name);
            printf("file pointer position :%d\n",ftell(fp));
        }
        fclose(fp) ;
    }
    return 0;
}
