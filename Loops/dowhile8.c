#include<stdio.h>

int main()
{   int emp_id;
     do
    {   printf("Enter employee ID ");
        scanf("%d",&emp_id) ;
    }while(emp_id<100||emp_id>500);
    return 0;
}
/*
output
Enter employee ID 99
Enter employee ID 23
Enter employee ID 100*/
