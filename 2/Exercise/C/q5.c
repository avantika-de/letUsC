/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not. */

#include<stdio.h>
int main()
{
int number,reversed=0,num;
int var=10000;
printf("enter a five digit number");
scanf("%d",&number);
num=number;
while(number>0)
{
	reversed=reversed+(number%10)*var;
	var=var/10;
	number=number/10;
}

if(reversed==num)
	printf("it is a palindrome");
else
	printf("the number is not palindrome");
}