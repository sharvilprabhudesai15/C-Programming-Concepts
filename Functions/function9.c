#include <stdio.h>
int cmpDates(int,int,int,int,int,int); //function declaration
int main()
{   int d1,d2,m1,m2,y1,y2,result;
    printf("enter date1 in(dd/mm/yyyy)format:");
    scanf("%d%*c%d%*c%d",&d1,&m1,&y1);
    printf("enter date1 in(dd/mm/yyyy)format:");
    scanf("%d%*c%d%*c%d",&d2,&m2,&y2);
    result=cmpDates(d1,d2,m1,m2,y1,y2);//function call
    if(result==1)
        printf("date 1 is less than date 2");
    else if(result==-1)
        printf("date 1 is greater than date 2");
    else
        printf("date 1 = date 2");
    return 0
}
//function definition
int cmpDates(int d1,int d2,int m1,int m2,int y1,int y2)           //function header
{   if(y1<y2)
        return 1;
    else if(y1>y2)
        return -1;
    else if(m1<m2)
        return 1;
    else if(m1>m2)
        return -1;
    else if(d1<d2)
        return 1;
    else if(d1>d2)
        return -1;
    else
        return 0;
}
