/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

#include<stdio.h>
int main(){
float cost_price,selling_price;
float profit,loss;
printf("enter the cost price of an item");
scanf("%f",&cost_price);
printf("enter the selling price of an item");
scanf("%f",&selling_price);
if(cost_price > selling_price)
{
	loss=cost_price-selling_price;
	print("the user has occured a loss of %f",loss);
}
else
{	profit = selling_price-cost_price;
	print("the user has occurred a profit of %f",profit);
}



}