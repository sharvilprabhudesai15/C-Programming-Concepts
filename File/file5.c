#include <stdio.h>

int main()
{    char ch[70];
     int i=0,n1;
     FILE *filePointer ;
    filePointer = fopen("data3.txt", "w") ;//name of the file,write mode

    if ( filePointer == NULL )
    { printf( "data3.txt file failed to open." ) ;
    }
    else
    {   printf("The file is now opened.\n") ;
        printf("enter a sentence\n");
        while(gets(ch)!=NULL)
        { fputs(ch,filePointer);    }//fputs -to insert a string into a file
        fclose(filePointer) ;
    }
    return 0;
}
