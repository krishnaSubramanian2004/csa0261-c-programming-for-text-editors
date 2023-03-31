#include<stdio.h>
#include<math.h>
struct point
{
	float x1,x2;
	float y1,y2;
}p;
int main()
{
	float dis,x,y;
	printf("enter the x1 value:");
	scanf("%f",&p.x1);
	printf("enter the x2 value:");
	scanf("%f",&p.x2);
	printf("enter the y1 value:");
	scanf("%f",&p.y1);
	printf("enter the y2 value:");
	scanf("%f",&p.y2);
	
	x=p.x2-p.x1;
	y=p.y2-p.y1;
	
	dis=sqrt(x*x+y*y);
	printf("%f",dis);
	return 0;
}
