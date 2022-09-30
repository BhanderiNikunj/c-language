#include<stdio.h>
main()
{
    int a=10,b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a is := %d\n",a);
    printf("b is := %d\n",b);

}