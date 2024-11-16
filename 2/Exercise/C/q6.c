/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three. */
#include<stdio.h>
int ram,shyam,ajay;
printf("enter the age of ram");
scanf("%d",&ram);
printf("enter the age of shyam");
scanf("%d",&shyam);
printf("enter the age of ajay");
scanf("%d",&ajay);
if(ram<shyam && ram<ajay)
	printf("ram is the youngest");
else if(shyam<ram && shyam<ajay)
	printf("shyam is the youngest");
else if(ajay<ram && ajay<shyam)
	printf("ajay is the youngest");
else if(ajay==ram && ajay<shyam)
	printf("ajay and ram are youngest");
else if(shyam==ajay && shyam<ram)
	printf("shyam and ajay are youngesT");
else if(ram==shyam && ram<ajay)
	printf("ram and shaym are youngest");
