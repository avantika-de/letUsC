/*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number. */

#include<stdio.h>
int main(){
	int num;
	printf("enter the integer");
	scanf("%d",&num);
	if(num %2 ==0)
		printf("the number is an even number")
	else
		printf("the number is an odd number")


}