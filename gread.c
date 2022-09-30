
.#include<stdio.h>
main()
{
    int math,hindi,eng,sci,san,com,pt,total,per;

    printf("enter the math mark :=");
    scanf("%d",&math);

    printf("enter the hindi mark :=");
    scanf("%d",&hindi);

    printf("enter the eng mark :=");
    scanf("%d",&eng);

    printf("enter the sci mark :=");
    scanf("%d",&sci);

    printf("enter the san mark :=");
    scanf("%d",&san);

    printf("enter the com mark :=");
    scanf("%d",&com);

    printf("enter the pt mark :=");
    scanf("%d",&pt);

    total = math + hindi + eng + sci + san + com + pt;
    per = total / 7;

    printf("per is :=%d\n\n",per);
    

    if(per > 90)
    {
        printf("A1 gread..");
    }

    if(per > 80 && per < 90)
    {
        printf("A gread..");
    }

    if(per > 70 && per < 80)
    {
        printf("B1 gread..");
    }

    if(per > 60 && per < 70)
    {
        printf("B gread..");
    }

    if(per > 50 && per < 60)
    {
        printf("C gread..");
    }

    if(per > 40 && per < 50)
    {
        printf("D gread..");
    }

    if(per < 33 && per < 40)
    {
        printf("you are fall..");
    }
}