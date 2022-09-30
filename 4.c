#include<stdio.h>
main()
{
    int basic=100 , HRA , DA , TA , salary;
    HRA = (basic * 10) / 100;
    DA = (basic * 8) / 100;
    TA = (basic * 5) / 100;

    salary = basic + HRA + DA + TA;

    printf("Gross salary is :=%d\n\n",salary);
}