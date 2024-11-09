/*Temperature of the city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade*/
#include<stdio.h>
int main()
{
float temperature_in_F,temperature_in_C;
printf("Enter the temperature of the city in Fahrenheit");
scanf("%f",&temperature_in_F);
temperature_in_C = ((temperature_in_F-32)*5)/9;
printf("the temperature in celcius is %f",temperature_in_C);
return 0;
}
