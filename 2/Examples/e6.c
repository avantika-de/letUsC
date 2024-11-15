/*Write a program to calculate the salary as per the
following table: Gender Years of Service Qualifications Salary
Male >= 10 Post-Graduate 15000
>= 10 Graduate 10000
< 10 Post-Graduate 10000
< 10 Graduate 7000
Female >= 10 Post-Graduate 12000
>= 10 Graduate 9000
< 10 Post-Graduate 10000
< 10 Graduate 6000

*/

#include<stdio.h>
int main()
{
	int years_of_service,salary;
	char gender,qualifications;
	printf("if the gender is male enter M, else enter F");
	printf("if the qualification is post-graduate, enter P, if graduate enter G");
	printf("enter the gender\n\n");
	scanf("%c",&gender);
	    getchar(); // Consume the leftover newline character

	printf("enter the qualifications");
	scanf("%c",&qualifications);
	getchar(); // Consume the leftover newline character

	printf("enter the years of service");
	scanf("%c",&years_of_service);
	if(years_of_service>=10)
	{
		if(qualifications=='P'&& gender=='M')
			salary = 15000;
		else if(qualifications=='G')
			salary=10000;
		else
			printf("wrong qualifications entered");
	}
	if(years_of_service<10&& gender=='M')
	{
		if(qualifications=='P')
			salary = 10000;
		else if(qualifications=='G')
			salary=7000;
		else
			printf("wrong qualifications entered");
	}
	if(years_of_service>=10&& gender=='F')
	{
		if(qualifications=='P')
			salary = 12000;
		else if(qualifications=='G')
			salary=9000;
		else
			printf("wrong qualifications entered");
	}
	if(years_of_service<10&& gender=='F')
	{
		if(qualifications=='P')
			salary = 10000;
		else if(qualifications=='G')
			salary=6000;
		else
			printf("wrong qualifications entered");
	}
	printf("the salary is %d",salary);
}