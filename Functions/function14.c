#include <stdio.h>

void circleArea(float);
void RectangleArea(float,float);

int main()
{     float dim1,dim2;
      int ch2;
      char ch1;
      printf("enter y to begin computation/ n to exit:\n");
      scanf("%c",&ch1);
      while(ch1=='y')
      {  printf("enter 1 to compute area of circle\n");
         printf("enter 2 to compute area of rectangle\n");
         scanf("%d",&ch2);
         switch(ch2)
         {  case 1:
                printf("enter the radius\n");
                scanf("%f",&dim1);
                circleArea(dim1);
                break;
            case 2:
                printf("enter the length and breadth\n");
                scanf("%f%f",&dim1,&dim2);
                RectangleArea(dim1,dim2);
                break;
            default:
                printf("invalid option\n");
                break;
         }
         fflush(stdin);
         printf("enter y to begin computation/n to exit");
         scanf("%c",&ch1);
      }
      return 0;
}

void circleArea(float r)
{  printf("area of a circle=%f\n",(3.14*r*r));  }
void RectangleArea(float l,float b)
{  printf("area of a rectangle=%f\n",(l*b));  }
