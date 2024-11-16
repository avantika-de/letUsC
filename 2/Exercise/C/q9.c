/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/

#include<stdio.h>
int main()
{
	int len,brd;
	printf("enter the length of the rectangle");
	scanf("%d",&len);
	printf("enter the breadth of the rectangle");
	scanf("%d",&brd);
	if(len*brd >(2*(len+brd)))
		printf("perimeter is greater than the area");
	else if(len*brd == (2*(len+brd))
		printf("perimeter and area of the rectangle are same");
	else
		printf("area is greater than the permimeter");
}
