/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not. The triangle is valid if the sum of two sides is
greater than the largest of the three sides*/

#include<stdio.h>
int main()
{	
	int s1,s2,s3;
	printf("enter the first side of the triange");
	scanf("%d",&s1);
	printf("enter the second side of the triangle");
	scanf("%d",&s2);
	printf("enter the third side of the triange");
	scanf("%d",&s3);
if(s1+s2>s3 || s3+s1>s2 || s2>s+s3)
	printf("it is a valid triangle");
else
	printf("not a valid triangle");
}