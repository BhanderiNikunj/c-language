#include<stdio.h>
int main()
{
    float P=34000 , R=30 , T=5 , si ; 

    printf("enter the paid velue :=");
    scanf("%f",&P);

    printf("enter the redious :=");
    scanf("%f",&R);

    printf("enter the time :=");
    scanf("%f",&T);

    si = (P*R*T)/100;

    printf("Simple Interest is :%f", si);
}