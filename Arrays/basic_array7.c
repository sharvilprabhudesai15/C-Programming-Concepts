//decimal to hexadecimal
#include <stdio.h>
int main()
{   int n,rem,cnt=0;
    char a[20];
    printf("Enter the number in decimal format\n");
    scanf ("%d", &n) ;
    while (n>0)
    {   rem=0;
        rem=n%16;
        if(rem<10)
            a[cnt]=rem+48;//works only for numbers 0 to 9
        else if(rem==10)    {   a[cnt]='A'; }
        else if(rem==11)    {   a[cnt]='B'; }
        else if(rem==12)    {   a[cnt]='C'; }
        else if(rem==13)    {   a[cnt]='D'; }
        else if(rem==14)    {   a[cnt]='E'; }
        else if(rem==15)    {   a[cnt]='F'; }
        cnt++;
         n/=16;
    }
     printf("number in hexadecimal\n");
    for(int i=cnt-1;i>=0;i--)
    {   printf("%c",a[cnt-1]);
        cnt--;
    }
    return 0;
}
