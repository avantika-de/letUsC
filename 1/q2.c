/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */
# include <stdio.h>
int main(){
float distance;
printf("Enter the distance between two cities in km:");
scanf("%f",&distance);
printf("the distance between these cities in meteres is %f",distance*1000.0);
printf("the distance between these cities in feet is %f",distance*3280.84);
printf("the distance between these cities in inches is %f",distance*39370.1);
printf("the distance between these cities in centimeters is %f",distance*100000);}