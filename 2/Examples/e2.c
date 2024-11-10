/*The current year and the year in which the
employee joined the organization are entered through the
keyboard. If the number of years for which the employee has
served the organization is greater than 3 then a bonus of Rs. 2500/-
is given to the employee. If the years of service are not greater
than 3, then the program should do nothing. 
*/

#include<stdio.h>
int main()
{
	int current_year,year_joining,bonus=0;
	printf("enter the current year");
	scanf("%d",&current_year);
	printf("enter the year of joining");
	scanf("%d",&year_joining);
	if(current_year-year_joining > 3){
				bonus =3000;
						}
	printf("printing the bonus recieved %d",bonus);
}