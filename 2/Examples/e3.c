/*In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic
salary and DA = 90% of basic salary. If his salary is either equal to
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
salary. If the employee's salary is input through the keyboard write
a program to find his gross salary. */

#include<stdio.h>
int main()
{	
	float salary,gross_salary;
	printf("enter the salary of the employee");
	scanf("%f",&salary);
	if(salary<1500){
			gross_salary = salary+0.10*salary+.90*salary;
			}
	else{
		gross_salary = salary +500+.98*salary;
		}
	printf("printing the gross salary %f",gross_salary);
}