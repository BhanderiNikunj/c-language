#include<stdio.h>
main()
{
	int x,y,velue1,velue2,velue3,velue4,ans;
	
	printf("enter the X velue :=");
	scanf("%d",&x);
	printf("enter the Y velue :=");
	scanf("%d",&y);
	
	velue1 = (x*x*x);
	velue2 = (y*y*y);
	velue3 = 3*(x*x*y);
	velue4 = 3*(x*y*y);
	
	ans = velue1+velue2+velue3+velue4;
	
	printf("ans is :=%d",ans);	 
}