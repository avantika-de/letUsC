/*
Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	int a,b;
	int pc;
	float radius;
	printf("enter the x coordinates of circle");
	scanf("%d",&x);
	printf("enter the y coordinates of circle");
	scanf("%d",&y);
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	/*If the distance between them is less than the radius then the point is inside the circle. */
	printf("enter the points coordinates");
	scanf("%d%d",&a,&b);
    pc = sqrt(pow(x-a, 2)+pow(y-b,2));
	if(pc<radius)
		printf("points lie within the circle");
	else
		printf("they lie outside");
}