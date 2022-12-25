#include <stdio.h>
void maxOfThree(int,int,int); //function declaration

int main()
{   int n1,n2,n3;
    printf("enter three nos:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    maxOfThree(n1,n2,n3);//function call
    return 0;
}
//function definition
void maxOfThree(int x,int y,int z)           //function header
{   if(x>y)
    {   if(x>z)
        {   printf("max of %d,%d and %d is %d",x,y,z,x); }
        else if(x==z)
        {   printf("%d and %d are equal\n",x,z); }
        else
        {   printf("max of %d,%d and %d is %d",x,y,z,z); }
    }
    else
    {   if(y>z)
        {   printf("max of %d,%d and %d is %d",x,y,z,y);  }
        else if(y==z)
        {   printf("%d and %d are equal\n",y,z);   }
        else
        {   printf("max of %d,%d and %d is %d",x,y,z,z); }
    }
}
