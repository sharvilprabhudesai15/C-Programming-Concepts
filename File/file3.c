#include <stdio.h>

int main()
{    char ch,c[20];
     int i=0,n1;
     FILE *filePointer ;
    filePointer = fopen("data2.txt", "w") ;//name of the file,write mode

    if ( filePointer == NULL )
    {
        printf( "data2.txt file failed to open." ) ;
    }
    else
    {   printf("The file is now opened.\n") ;
        printf("enter 10 nos");
        while(i<10)
        { scanf("%d",&n1);
          putw(n1,filePointer);//insert integers into a file
          i++;
        }
        fclose(filePointer) ;
    }
    return 0;
}
