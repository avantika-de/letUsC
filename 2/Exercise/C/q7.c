/*
Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees. 
*/

#include <stdio.h>
int main()
{
	int a1,a2,a3;
	printf("enter the three angles of the triange");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1+a2+a3 ==180)
		printf("valid triangle entered");
	else
		printf("invalid triangle entered");
}