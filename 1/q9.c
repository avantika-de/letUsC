/*
If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

#include<stdio.h>
int main(){
int number,sum,last_digit,first_digit;
printf("enter the four digit number");
scanf("%d",&number);
last_digit = number%10;
first_digit = number/1000;
sum = last_digit +first_digit;
printf("printing the sum of first and last digit %d",sum);
}