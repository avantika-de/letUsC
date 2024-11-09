/*The length and breadth of a rectangle is and radius of a circle is are input through the keyboard. 
Write a program to calculate the area and perimeter of the rectangle and the area and circumference
of the circle*/

#include<stdio.h>
int main(){
float length_re,breadth_re;
float radi_ci;
float area_re,peri_re;
float area_ci,peri_ci;
printf("enter the length of the rectangle");
scanf("%f",&length_re);
printf("enter the breadth of the rectangle");
scanf("%f",breadth_re);
area_re = length_re*breadth_re;
peri_re = 2*(length_re+breadth_re);
printf("the area of the rectangle is %.2f",area_re);
printf("the perimiter of the rectangle is %.2f",peri_re);
printf("\n\n");
printf("Enter the radius of the circle");
scanf("%f",&radi_ci);
area_ci = 3.14*radi_ci*radi_ci;
peri_ci = 3.14*2*radi_ci;
printf("the area of the circle is %f",area_ci);
printf("\n\n");
printf("the perimiter of the circle is %f",peri_ci);
}