/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle. */
#include<stdio.h>
int main()
{	
	int s1,s2,s3;
	printf("enter the first side of the triangle");
	scanf("%d",&s1);
	printf("enter the second side of the triangle");
	scanf("%d",&s2);
	printf("enter the third side of the triangle");
	scanf("%d",&s3);
	if(s1==s2==s3)
		printf("it is an equilateral triangle");
	else if((s1==s2 && s1!=s3) ||(s1==s3 && s1!=s2) ||(s2==s3 && s1!=s3))
		printf("it is an isoceles triangle");
	else if(s1!=s2!=s3)
		printf("it is a scalene triangle");
	else if((s1*s1+s2*s2==s3*s3)||(s2*s2+s3*s3==s1*s1)||(s1*s1+s3*s3==s2*s2))
		printf("it is a right angled triangle");
}