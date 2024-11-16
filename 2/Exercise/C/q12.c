/*Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0). */

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the x coordinate");
	scanf("%d",&x);
	printf("enter the y coordinates");
	scanf("%d",&y);
	if(x==0 && y==0)
		printf("they lie in origin");
	else if(x==0 && y!=0)
			printf("they lie on y axis");
	else
		printf("they lie on x axis");
}
