#include <stdio.h>

int main()
{    int ch;
     FILE *filePointer ;
    filePointer = fopen("data2.txt", "r") ;

    if ( filePointer == NULL )
    { printf( "data2.txt file failed to open." ) ; }
    else
    {
        while((ch=getw(filePointer))!=EOF)
        {   printf("%d\n",ch);    }
        fclose(filePointer) ;
       // printf("\nThe file is now closed.") ;
    }
    return 0;
}
