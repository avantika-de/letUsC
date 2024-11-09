/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/
# include<stdio.h>
main()
{
int c,d;
int temp;
printf("enter the number for c");
scanf("%d",&c);
printf("enter the number for d");
scanf("%d",&d);
printf("the values of c and d are %d %d",c,d);
temp = c;
c =d;
d=temp;
printf("the values of c and d are %d %d",c,d);
}