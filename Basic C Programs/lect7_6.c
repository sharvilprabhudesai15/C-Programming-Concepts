#include <stdio.h>

int main()
{ int age;
  printf("enter the age of person\n");
  scanf("%d",&age);
  if(age>=0 && age<=3)
  { printf("category:infant");}
   if(age>3 && age<=5)
  { printf("category:toddler");}
   if(age>5 && age<=10)
  { printf("category:kid");}
   if(age>10 && age<18)
  { printf("category:teenager");}
   if(age>=18)
  { printf("category:adult");}
  return 0;
}
