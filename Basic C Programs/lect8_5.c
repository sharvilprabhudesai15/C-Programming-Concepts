#include <stdio.h>

int main()
{   float m1,m2,m3,per;
    printf ("Enter the marks of a student for three subjects(100 mks each):");
    scanf ("%f%f%f" ,&m1,&m2,&m3) ;
    per=((m1+m2+m3)/300)*100;
    printf("per=%f",per);
    if(per>=70)
        printf("\ngrade A");
    else if(per>=60 && per<70)
        printf("\ngrade B");
    else if(per>=50 && per<60)
        printf("\ngrade C");
    else if(per>=40 && per<50)
        printf("\ngrade D");
    else
        printf("\nfail");
    return 0;
}
