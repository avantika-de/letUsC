/*If a five-digit number is input through the keyboard, write a
program to reverse the number. */

#include<stdio.h>
int main(){
int number,reverse=0;
int divisor = 10000;
printf("enter the five digit number");
scanf("%d",&number);
while(number>0)
{
	reverse = reverse+((number%10)*divisor);
	divisor=divisor/10;
	number = number/10;
}
printf("the reverse of the number is %d",reverse);
}
