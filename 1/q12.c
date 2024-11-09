/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item. */
#include<stdio.h>
int main()
{
float profit,sellingprice,cost_price;
printf("enter the profit earned on 15 items");
scanf("%f",&profit);
printf("enter the total selling price of 15 items");
scanf("%f",&sellingprice);
cost_price = sellingprice-profit;
printf("the cost price is %f",cost_price/15);
}
