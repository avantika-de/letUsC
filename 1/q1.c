/*Ramesh basic salary is input through the keyboard. His dearness alowwance is 40% of his basic salary and house rent is 20% of his basic salary. Write a program to calculate his gross salary*/
#include <stdio.h>

int main() {
    // Write C code here
    float salary,gross_salary;
    printf("Hello Ramesh, please enter your basic salary");
    scanf("%f",&salary);
    gross_salary = salary +0.40*salary +.20*salary;
    printf("Your gross salary is %f",gross_salary);
    return 0;
}