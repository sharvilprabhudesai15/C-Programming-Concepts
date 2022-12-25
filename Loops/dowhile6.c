#include <stdio.h>

int main()
{   int evencnt=0,oddcnt=0,n,cnt=1;
    printf("enter the value for n:\n");
    scanf("%d",&n);
    do
    {   if(cnt%2==0)
        {   evencnt++;  }
        else
        {   oddcnt++;   }
        cnt++;
    }while(cnt<=n);
    printf("\noddcnt=%d \t evencnt=%d\t ",oddcnt,evencnt);
    return 0;
}
