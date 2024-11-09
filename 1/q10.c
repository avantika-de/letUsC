/*
In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number
of illiterate men and women if the population of the town is
80,000. 
*/

#include<stdio.h>
int main()
{
int men,literacy,literate_men ,illeterate_men ,literate_women ,illieterate_women,women ;
men = .52*80000;
literacy = .48*80000;
literate_men = .35*80000;
women = 80000-men;
illeterate_men = men-literate_men;
literate_women = literacy-literate_men;
illieterate_women = women-literate_women;
printf("printing the illieterate men and women %d %d",illeterate_men,illieterate_women);
}