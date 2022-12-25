#include <stdio.h>

int main()
{   char ch[20];
    FILE *filePointer ;
    filePointer = fopen("data3.txt", "r") ;

    if ( filePointer == NULL )
    { printf( "data3.txt file failed to open." ) ; }
    else
    {  //fgets(dest_string,no of chars to be read,filepointer)
         while((fgets(ch,20,filePointer))!=NULL)
        {   printf("%s\n",ch);    }
        fclose(filePointer) ;
    }
    return 0;
}
