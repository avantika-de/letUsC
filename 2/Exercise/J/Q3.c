/*Write a program to find the greatest of the three numbers
entered through the keyboard using conditional operators. */
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	printf("enter the third number");
	scanf("%d",&num3);
	(num1>num2 && num1>num3)?printf("number 1 is the greatest"):((num2>num1 && num2>num3) ? printf("num2 is greatest"): printf("num 3 is greatest"));
}