#include<stdio.h>
main()
{
    int no,date;
    printf("Enter the no:=");
    scanf("%d",&no);

    date=no%7;

    switch(date)
    {
        case 4:
            printf("sunday");
            break;
        case 5:
            printf("Monday");
            break;
        case 6:
            printf("Tuesday");
            break;
        case 0:
            printf("Wednesday");
            break;
        case 1:
            printf("Thursday");
            break;
        case 2:
            printf("Friday");
            break;
        case 3:
            printf("saturday");
            break;
        default:
            printf("Invaild");
    }
}