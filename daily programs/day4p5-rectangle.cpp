#include<stdio.h>
struct rectangle
{
	float width;
	float height;
}r;
int main(){
	int area;
	struct rectangle r;
	r.width=20;
	r.height=20;
	area=r.width*r.height;
	printf("area=%d",area);
}
