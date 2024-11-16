/*Find the absolute value of a number entered through the
keyboard.*/
#include <stdio.h>
int main()
{
	int num,abs_num;
	printf("enter the number");
	scanf("%d",&num);
	if(num>0)
		abs_num = num;
	else
		abs_num = num*(-1);
	printf("the absolute number is %d",abs_num);
}