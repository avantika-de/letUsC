/*The marks obtained by a student in 5 different
subjects are input through the keyboard. The student gets a
division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student. */

#include<stdio.h>

int main()
{
int m1,m2,m3,m4,m5;
printf("enter the marks obtained in five subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
float percentage;
percentage = ((m1+m2+m3+m4+m5)/500)*100;
if(percentage>=60){
	printf("you got the first division");
}
if(percentage>=50 && percentage<=59)
	printf("you got second division");
if(percentage>=49 && percentage<=49)
	printf("you got third division");
if(percentage<40)
	printf("you failed");
}