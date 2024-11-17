/*Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a
special symbol or not. */

#include<stdio.h>
int main()
{	
	char character;
	printf("enter a character");
	scanf("%c",&character);
	character>=97 && character<=122?printf("lowercase character entered"):(((character>=32 && character<=47) || (character>=58 && character<=64) || (character>=91 && character<=96) || (character>=123 && character<=126))?printf("special character entered"):printf("something else"));
}