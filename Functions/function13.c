//Function With Arguments But No Return Value
#include <stdio.h>
#include <math.h>
void area(float a,float b,float c)
{    float a1,s;
     s=(a+b+c)/2;
     printf("semi perimeter:%f\n",s);
     a1=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("area of triangle is %f",a1);
}
void type(float a,float b,float c)
{
    if(((a*a)+(b*b)==(c*c) )|| ((b*b)+(c*c)==(a*a)) ||((c*c)+(a*a)==(b*b)))
        printf ("The triangle is right angled triangle\n");
    else if(a==b && b==c)
         printf ("The triangle is an equilateral triangle\n");
     else if(a==b || b==c ||c==a)
         printf ("The triangle is an isosceles triangle\n");
    else
         printf ("The triangle is a scalene triangle\n");
}
int main()
{   float a,b,c;
    printf("enter the sides of a triangle");
    scanf("%f%f%f",&a,&b,&c);
    type(a,b,c);
    area(a,b,c);
    return 0;
}
