/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)*/
#include<stdio.h>
int main()
{
int num;
int sum=0;
print("enter the number");
scanf("%d",&num);
while(num>0){
	digit = num%10;
	sum = sum + digit;
	num = num/10;	
	}
}
printf("printing the sum of the digits %d",sum);
