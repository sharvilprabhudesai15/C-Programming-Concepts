#include <stdio.h>

int main()
{    char ch;
     FILE *filePointer ;
    filePointer = fopen("data1.txt", "w") ;//name of the file,write mode

    if ( filePointer == NULL )
    {
        printf( "data1.txt file failed to open." ) ;
    }
    else
    {   printf("The file is now opened.\n") ;
        printf("enter the characters:\n");
        //press cntrl+Z to stop reading characters

        while((ch=getchar())!=EOF)
        { fputc(ch,filePointer);//fputc -function to insert individual characters
        }
        fclose(filePointer) ;
        printf("Data successfully written in file data1.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;
}
