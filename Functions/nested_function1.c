#include <stdio.h>

int main(void)
{
    printf("within Main()\n");
    int fun()
    {   printf("within fun()\n");
         int view()
        {
            printf("within view()\n");
        }
        view();
        return 1;
    }
    fun();
   // view();
    return 0;
}
