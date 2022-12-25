//to copy contents of one file to another
#include <stdio.h>

int main()
{    char ch;
     FILE *fp1,*fp2 ;
    fp1 = fopen("data1.txt", "r") ;//name of the file,write mode
    fp2=fopen("data4.txt","w");
    if ( fp1 == NULL )
    { printf( "data1.txt file failed to open." ) ;
      exit(1);
    }
    if ( fp2 == NULL )
    { printf( "data4.txt file failed to open." ) ;
      exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)
    { fputc(ch,fp2);//fputc -function to insert individual characters
    }
    fclose(fp2);
    fclose(fp1) ;
    return 0;
}
