/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100. */

#include <stdio.h>
int main(){
float marks1,marks2,marks3,marks4,marks5;
float aggregate,percentage;
printf("Enter the marks obtained in subject 1 ");
scanf("%f",&marks1);
printf("Enter the marks obtained in subject 2 ");
scanf("%f",&marks2);
printf("Enter the marks obtained in subject 3 ");
scanf("%f",&marks3);
printf("Enter the marks obtained in subject 4 ");
scanf("%f",&marks4);
printf("Enter the marks obtained in subject 5 ");
scanf("%f",&marks5);
aggregate=marks1+marks2+marks3+marks4+marks5;
percentage=(aggregate/500)*100;
printf("the aggregate of all marks is %f",aggregate);
printf("the percentage you got is %f",percentage);
}

