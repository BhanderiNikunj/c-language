#include<stdio.h>
main()
{
    int a=10,b=20,c;

    c=a;
    a=b;
    b=c;

    printf("a => %d\n",a);
    printf("b => %d\n",b);
}