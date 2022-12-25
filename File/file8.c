#include <stdio.h>
struct student
{   int rollno;
    char name[20];
}stud;
int main()
{   int i=0;
     FILE *fp ;
    fp = fopen("stud.txt", "r") ;//name of the file,write mode

    if ( fp == NULL )
    { printf( "stud.txt file failed to open." );}
    else
    {   printf("roll no name\n");
        while(fscanf(fp,"%d%s",&stud.rollno,stud.name)!=EOF)
        {   printf("%d  %s\n",stud.rollno,stud.name); }
        fclose(fp) ;
    }
    return 0;
}
