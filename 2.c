#include<stdio.h>
main()
{
	int x,y,velue1,velue2,velue3,ans;
	
	printf("enter the X velue :=");
	scanf("%d",&x);
	printf("enter the Y velue :=");
	scanf("%d",&y);
	
	velue1 = (x*x);
	velue2 = 2*(x*y);
	velue3 = (y*y);
	
	ans = velue1-velue2+velue3;
	
	printf("ans is :=%d",ans);	 
}