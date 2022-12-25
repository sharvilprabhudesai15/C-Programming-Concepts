#include <stdio.h>
#include <string.h>
struct patient
{ int pno;
  char pname[50];
  char disease[50];
}p;

int search(FILE *f,char *sname)
{   int flag=0;
    rewind(f);
    while(fread(&p,sizeof(p),1,f)==1)
    {
        if(strcmp(sname,p.pname)==0)
        {   printf("patient found\n\n");
            flag=1;break;
        }
    }
    if(flag==0)
    { printf("record not found\n"); }
    return flag;
}

void deleterecord(FILE *f)
{   char sname[50];int flag=-1;
    printf("\nenter the patient name to be searched\n");
    scanf("%s",sname);
    if(search(f,sname)==0)
    {return;}
    FILE *ftmp;
    ftmp=fopen("temp.dat","w+");
    rewind(f);
    while(fread(&p,sizeof(p),1,f)==1)
    {   if(strcmp(sname,p.pname)!=0)
        {   fwrite(&p,sizeof(p),1,ftmp);
        }
    }
    fclose(f);
    fclose(ftmp);
    remove("patients.dat");
    rename("temp.dat","patients.dat");
    f=fopen("patients.dat","a+");
}

void modifyrecord(FILE *f)
{   char sname[50];int flag=-1;
    printf("\nenter the patient name to be searched\n");
    scanf("%s",sname);
    fflush(stdin);
    long size=sizeof(p);
    int n=search(f,sname);
    printf("n=%d\n",n);
    if(n!=0)
    {   printf("enter patient no\n");
        scanf("%d",&p.pno);
        printf("enter patient name\n");
        scanf("%s",p.pname);
        fflush(stdin);
        printf("enter patient ailment\n");
        scanf("%s",&p.disease);
        fseek(f,-size,1);
        fwrite(&p,sizeof(p),1,f);
    }
}

void insertfile(FILE *f)
{   fseek(f,0,2);
    printf("enter patient no\n");
    scanf("%d",&p.pno);
    printf("enter patient name\n");
    scanf("%s",p.pname);
    printf("enter patient ailment\n");
     fflush(stdin);
    scanf("%s",&p.disease);
    fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
}
void display(FILE *f)
{   rewind(f);
    while(fread(&p,sizeof(p),1,f)==1)
    {   printf("patient no:%d\n",p.pno);
        printf("patient name:%s\n",p.pname);
        printf("patient disease:%s\n",p.disease);
        printf("\n");
    }
}
int main()
{   FILE *f;
    f=fopen("patients.dat","r+");
    if ( f == NULL )
    {   f=fopen("patients.dat","w+");
        if ( f == NULL )
        { printf( "patients.dat file failed to open." );}
    }
    insertfile(f);
    insertfile(f);
    insertfile(f);
    modifyrecord(f);
    deleterecord(f);
    display(f);
    return 0;
}
