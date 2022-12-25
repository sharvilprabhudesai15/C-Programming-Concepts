#include <stdio.h>

int main()
{    char ch;
     int newlines=0,whitespace=0,tabs=0;
     FILE *filePointer ;
    filePointer = fopen("data1.txt", "r") ;

    if ( filePointer == NULL )
    { printf( "data1.txt file failed to open." ) ; exit(1);}
    else
    {
        while((ch=fgetc(filePointer))!=EOF)
        {   if(ch=='\n')    newlines++;
            if(ch=='\t')    tabs++;
            if(ch==' ')     whitespace++;
        }
        fclose(filePointer) ;
       printf("\n no of newline characters:%d",newlines) ;
       printf("\n no of tab characters:%d",tabs) ;
       printf("\n no of whitespace characters:%d",whitespace) ;
    }
    return 0;
}
