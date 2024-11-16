/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol. */
#include<stdio.h>
int main()
{	
	char character;
	printf("enter the character");
	scanf("%c",&character);
	if(character >=65 && character <=90)
		printf("it is an upper case character");
	else if(character >=97 && character <=122)
		printf("it is a lower case character");
	else if(character >=48 && character <=57)
		printf("it is a digit");
	else
		printf("special symbol entered");
	
}