/*A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message. */

#include<stdio.h>
int main()
{
	int days,fine;
	printf("enter the days the member is late to return the book");
	scanf("%d",&days);
	if(days<=5)
		fine=days*0.50;
	else if(days>=6 && days<=10)
		fine=days*1;
	else if(days>10 && days<=30)
		fine=days*5;
	else
		printf("your membership has been cancelled");
	
	printf("the fine is %d",fine);
}
