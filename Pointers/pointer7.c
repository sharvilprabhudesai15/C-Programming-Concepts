#include <stdio.h>
//addition,subtraction,increment and decrement operations
int main()
{   int a = 5, *pi = &a;
    double b = 2.2, *pf = &b;
    char c = 'x', *pc = &c;
    printf("\nvalue of pi =%u",pi);
    printf("\nvalue of pf =%u",pf);
    printf("\nvalue of pc=%u",pc);
    pi++;//pi+4
    printf("\n\nvalue of pi after pi++=%u",pi);
    pi = pi-3;//pi-(3*4)
    printf("\nvalue of pi after pi-3=%u",pi);
    pi = pi + 5;//pi+(5*4)
    printf("\nvalue of pi after pi+5=%u",pi);
    pi --;
    printf("\nvalue of pi after pi--=%u",pi);
    pf++;
    printf("\n\nvalue of pf after pf++=%u",pf);
    pf = pf-3;
    printf("\nvalue of pf after pf-3=%u",pf);
    pf = pf + 5;
    printf("\nvalue of pf after pf+5=%u",pf);
    pf --;
    printf("\nvalue of pf after pf--=%u",pf);
    pc++;
    printf("\n\nvalue of pc after pc++=%u",pc);
    pc = pc-3;
    printf("\nvalue of pc after pc-3=%u",pc);
    pc = pc + 5;
    printf("\nvalue of pf after pc+5=%u",pc);
    pc --;
    printf("\nvalue of pf after pc--=%u",pc);
    return 0;
}
/*
value of pi =6356720
value of pf =6356712
value of pc=6356711

value of pi after pi++=6356724
value of pi after pi-3=6356712
value of pi after pi+5=6356732
value of pi after pi--=6356728

value of pf after pf++=6356720
value of pf after pf-3=6356696
value of pf after pf+5=6356736
value of pf after pf--=6356728

value of pc after pc++=6356712
value of pc after pc-3=6356709
value of pf after pc+5=6356714
value of pf after pc--=6356713
*/
