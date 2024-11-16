/*Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical
operators && and ||.*/

#include <stdio.h>
int main()
{	
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%100==0 && year %400==0)
		printf("it is a leap year");
	else if(year %4==0 && year %100 !=0)
		printf("it is a leap year");
	else
		printf("it is not a leap year");
}