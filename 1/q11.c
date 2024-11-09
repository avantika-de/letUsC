/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer. */

#include<stdio.h>
int main(){
int amount,num_100,num_50,num_10;
printf("enter the amount to be withdrawn");
scanf("%d",&amount);
num_100 = amount/100;
amount = amount%100;
num_50= amount/50;
amount = amount%50;
num_10 = amount/10;
amount = amount%10;
printf("the notes given will be %d %d %d",num_100,num_50,num_10);
}