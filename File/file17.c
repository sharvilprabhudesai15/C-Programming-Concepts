#include <stdio.h>
#include <string.h>
int main()
{   char ch[200];
    int wrdcnt=0;
    FILE *filePointer ;
    filePointer = fopen("data3.txt", "r+") ;
    char *token;
    if ( filePointer == NULL )
    { printf( "data3.txt file failed to open." ) ;
    }
    else
    {   while(fgets(ch,200,filePointer)!=NULL)
        {    token=strtok(ch," ");
             while(token!=NULL)
             {  int t=strcmp(token,"file");
                if(t==0)
                {   wrdcnt++;}
                token=strtok(NULL," ");
             }
        }
        printf("word count=%d\n\n",wrdcnt);
        fclose(filePointer) ;
    }
    return 0;
}
