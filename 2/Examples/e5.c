 /*A company insures its drivers in the following
cases:
− If the driver is married.
− If the driver is unmarried, male & above 30 years of age.
− If the driver is unmarried, female & above 25 years of age. In all other cases the driver is not insured. If the marital status, sex
and age of the driver are the inputs, write a program to determine
whether the driver is to be insured or not.*/

#include<stdio.h>
int main(){

	char marital_status,sex;
	int age;
	printf("enter M for Married and U for Unmarried for marital status. Enter F for female and M for male");
	printf("enter your marital status");
	scanf("%c",&marital_status);
	printf("enter your sex");
	scanf("%c",&sex);
	printf("enter your age");
	scanf("%d",&age);
	if(marital_status == 'M'|| (marital_status=='U' && sex == 'M' && age>30) || (marital_status=='U' && sex=='F' && age>25))
		printf("you are insured");
	else
		printf("you are not insured");

	
}
