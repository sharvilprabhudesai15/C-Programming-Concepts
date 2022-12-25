#include <stdio.h>

void selectionCriteria(int,float); //function declaration

int main()
{   int age;
    float ht;
    printf("enter age and height:\n");
    scanf("%d%f",&age,&ht);
    selectionCriteria(age,ht);//function call
    return 0;
}

//function definition
void selectionCriteria(int a,float h)           //function header
{   if(a>25 || a<20)
    {   printf("age should be less than 25 and greater than 20\n");
        return;
    }
    if(h<5)
    {   printf("height should be greater than 5 ft\n");
        return;
    }
    printf("you are selected for the next round\n");
}
