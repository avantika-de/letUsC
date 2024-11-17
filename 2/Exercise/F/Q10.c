/*The policy followed by a company to process customer orders
is given by the following rules:
(a) If a customer order is less than or equal to that in stock
and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him
intimation.
(c) If has credit is Ok but the item in stock is less than has
order, supply what is in stock. Intimate to him data the
balance will be shipped.
Write a C program to implement the company policy. */

#include<stdio.h>
int main()
int main() {
    // Write C code here
{
	int stock,order;
	char credit;
	printf("enter the stock quantity");
	scanf("%d",&stock);
	printf("enter the quantity ordered by the customer");
	scanf("%d",&order);
	printf("enter the credit for the supply, enter O for Ok and N for Not Okay");
	getchar();// printf often ends with a next line symbol, and so the credit takes the new line character, making it impossible to enter values for it. Therefore, getchar() is used. When this function is executed, the computer will wait for a key to be pressed and assigns the value to the variable when the “enter” key pressed.
	scanf("%c",&credit);
	if(order<=stock && credit=='O')
		printf("supply has requirements");
	else if(credit=='N')
		printf("Sorry we cannot supply");
	else if(credit =='O' && stock<=order)
		printf(" we will be delievering only %d and %d will be delievered later ",stock,order-stock);
}
}