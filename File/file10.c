#include <stdio.h>
struct student
{   int rollno;
    char name[20];
}stud1;
int main()
{   int i=0;
     FILE *fp ;
    fp = fopen("stud1.txt", "r") ;//name of the file,write mode

    if ( fp == NULL )
    { printf( "stud1.txt file failed to open." );}
    else
    {   printf("roll no name\n");
        while(fread(&stud1,sizeof(stud1),1,fp)==1)
        {   printf("%d  %s\n",stud1.rollno,stud1.name); }
        fclose(fp) ;
    }
    return 0;
}
