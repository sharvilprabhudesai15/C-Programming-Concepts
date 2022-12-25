#include <stdio.h>
void computeGrade(float m1,float m2,float m3,float totalmks)
{   float avg,per;
    avg=(m1+m2+m3)/totalmks;
    per=avg*100;
    if(per>=70)
    {   printf("Grade:DISTINCTION \n"); }
    else if(per>=60 && per<70)
    {   printf("Grade:FIRST \n"); }
    else if(per>=50 && per<60)
    {   printf("Grade:SECOND \n"); }
    else if(per>=40 && per<50)
    {   printf("Grade:PASS\n"); }
    else
    {   printf("Grade:FAIL\n");   }
}
int main()
{   char name[50];
    float m1,m2,m3,tt;
    printf("enter the name\n");
    scanf("%s",name);
    printf("enter the marks(for three subjects) and total marks\n");
    scanf("%f %f %f %f",&m1,&m2,&m3,&tt);
    printf("---GRADE REPORT---\n");
    printf("Name:%s\n",name);
    printf("marks for subject1:%f\n",m1);
    printf("marks for subject2:%f\n",m2);
    printf("marks for subject2:%f\n",m3);
    computeGrade(m1,m2,m3,tt);
    return 0;
}
