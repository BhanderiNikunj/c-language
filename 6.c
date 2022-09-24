#include<stdio.h>
main()
{
	int x,y,z,velue1,velue2,velue3,velue4,ans;
	
	printf("enter the X velue :=");
	scanf("%d",&x);
	printf("enter the Y velue :=");
	scanf("%d",&y);
	printf("enter the Z velue :=");
	scanf("%d",&z);
	
	velue1 = (x*x);
	velue2 = (y*y);
	velue3 = (z*z);
	velue4 = 2*(x*y)+2*(x*z)-2*(y*z);
	
	ans = velue1+velue2+velue3+velue4;
	
	printf("ans is :=%d",ans);
}