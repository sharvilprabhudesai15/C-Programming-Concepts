#include <stdio.h>

typedef struct payroll
{   float basic_pay,gross_pay,net_pay;
    float tax,hra,ta,da;
}emp_payroll;


int main()
{   emp_payroll p[3];
    printf("enter the details of 3 employees\n");
    for(int i=0;i<3;i++)
    {   printf("enter employee%d details\n",(i+1));
        printf("\nenter basic pay:");
        scanf("%f",&p[i].basic_pay) ;
        printf("\nenter tax:");
        scanf("%f",&p[i].tax) ;
        printf("\nenter hra:");
        scanf("%f",&p[i].hra) ;
        printf("\nenter ta:");
        scanf("%f",&p[i].ta) ;
        printf("\nenter da:");
        scanf("%f",&p[i].da) ;
        p[i].gross_pay =p[i].basic_pay+p[i].hra+p[i].ta+p[i].da;
        p[i].net_pay=p[i].gross_pay-p[i].tax;
    }
    for(int i=0;i<3;i++)
    {   printf("\nemployee%d payroll details\n",(i+1));
        printf("\nbasic pay:\t%f",p[i].basic_pay);
        printf("\ntax:\t%f",p[i].tax);
        printf("\nhra:\t%f",p[i].hra);
        printf("\nta:\t%f",p[i].ta);
        printf("\nda:\t%f",p[i].da);
        printf("\ngross salary:\t%f",p[i].gross_pay);
        printf("\nnet salary:\t%f",p[i].net_pay);

    }
    return 0;
}
