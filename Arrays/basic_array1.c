#include <stdio.h>
 //datatype arrayname[size];
 //datatype arrayname[]={initializer list}
int main()
{  int i=0;
   int num[3]={};//initializer list,size of array is no of elements in the initializer list
   for(i=0;i<3;i++)
   {  printf("a[%d]=%d\n",i,num[i]);
   }

}
