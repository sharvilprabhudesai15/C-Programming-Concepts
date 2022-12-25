#include <stdio.h>
struct student
{   int rollno;
    char name[20];
}stud;
int main()
{   int i=0;
     FILE *fp ;
    fp = fopen("stud.txt", "w") ;//name of the file,write mode

    if ( fp == NULL )
    { printf( "data3.txt file failed to open." ) ;
    }
    else
    {   for(i=0;i<3;i++)
        {   printf("enter the student roll no and name\n");
            scanf("%d %s",&stud.rollno,stud.name);
            fprintf(fp,"%d %s ",stud.rollno,stud.name);
        }
        fclose(fp) ;
    }
    return 0;
}
