/* If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402. */
#include<stdio.h>
int main(){
int num,divisor=10000,new_num=0,digit;
printf("enter a five digit number");
scanf("%d",&num);
while(num>0){
		digit = num/divisor;
		num =num%divisor;
		new_num =  new_num + (digit+1)*divisor;
		divisor = divisor/10;

		}
printf("printing the new number %d",new_num);
}