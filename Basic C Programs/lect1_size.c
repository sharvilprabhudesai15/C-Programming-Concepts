#include <stdio.h>
#include <limits.h>

int main()
{   printf("size of short int:  %u\n",(sizeof( short int)));
    printf("size of long int:  %u\n",(sizeof( long int)));
    printf("size of int:  %u\n",(sizeof( int)));
    printf("size of float:  %u\n",(sizeof( float)));
    printf("size of double:  %u\n",(sizeof( double)));
    printf("size of long double:  %u\n",(sizeof( long double)));
    printf("size of unsigned long int:  %u\n",(sizeof( unsigned long int)));
    printf("size of unsigned long long :  %u\n",(sizeof( unsigned long long)));
    printf("SCHAR_MIN:  %d\n",SCHAR_MIN);
    printf("SCHAR_MAX:  %d\n",SCHAR_MAX);
    printf("UCHAR_MAX:  %d\n",UCHAR_MAX);
    printf("SHRT_MIN:  %d\n",SHRT_MIN);
    printf("INT_MIN:  %d\n",INT_MIN);
    printf("INT_MAX:  %d\n",INT_MAX);
    printf("LONG_MAX:  %d\n",LONG_MAX);
    printf("LONG_MIN:  %d\n",LONG_MIN);
    return 0;
}
