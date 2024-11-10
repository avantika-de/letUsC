/*While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program
to calculate the total expenses. */

#include<stdio.h>
int main(){
	int quantity;
	float discount=0,price,expense;
	printf("enter the quantity purchased");
	scanf("%d",&quantity);
	if(quantity>100){
			discount=.10;
			}
	printf("enter the price per item");
	scanf("%f",&price);
	expense=price*quantity+discount;
	printf("the total expense is %f",expense);
}