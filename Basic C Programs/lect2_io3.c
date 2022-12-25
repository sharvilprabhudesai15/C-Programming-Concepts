#include <stdio.h>

int main()
{   int day,month,year;
    float sum;
    printf("enter the date(dd/mm/yyyy):");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("entered date by user:%d/%d/%d",day,month,year);
    return 0;
}
