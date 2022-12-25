#include <stdio.h>

int main()
{    char ch;
     FILE *filePointer ;
    filePointer = fopen("data1.txt", "r") ;

    if ( filePointer == NULL )
    { printf( "data1.txt file failed to open." ) ; exit(1);}
    else
    {
        while((ch=fgetc(filePointer))!=EOF)
        {   printf("%c",ch);    }
        fclose(filePointer) ;
       // printf("\nThe file is now closed.") ;
    }
    return 0;
}
