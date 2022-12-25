/*WACP to print all the multiples of 4 till n. [while loop]*/
#include <stdio.h>

int main()
{   int n,num,cnt=1;
    printf("enter the n value and no whose multiple has to be found\n");
    scanf("%d %d",&n,&num);
    while(cnt<=n)
    {  if(cnt%num==0)
        {   printf("%d is a multiple of %d\n",cnt,num);}
        cnt++;
    }
    return 0;
}
