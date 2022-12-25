#include <stdio.h>
//fwrite and fread -block writing and block reading
struct student
{   int rollno;
    char name[20];
}stud;
int main()
{   int i=0;
     FILE *fp ;
    fp = fopen("stud1.txt", "w") ;//name of the file,write mode

    if ( fp == NULL )
    { printf( "stud1.txt file failed to open." ) ;
    }
    else
    {   for(i=0;i<2;i++)
        {   printf("enter the student roll no and name\n");
            scanf("%d %s",&stud.rollno,stud.name);
            fwrite(&stud,sizeof(stud),1,fp);
        }
        fclose(fp) ;
    }
    return 0;
}
