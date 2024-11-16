/* An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
90 Let Us C
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured. */
#include<stdio.h>
int main()
{
	char health,gender;
	int age, city;
	printf("enter the health of the person, enter E for excellent and P for poor");
	scanf("%c",&health);
	printf("enter the gender of the person");
	scanf("%c",&gender);
	printf("enter the age of the person");
	scanf("%d",&age);
	printf("enter the place where the user lives, enter V for villange and C for city");
	scanf("%c",&city);
	if(health =='E' && (age>=25 && age<=35) && (city=='C'))
	{
		if(gender == 'M')
			printf("you are insured with a premium of 4 per thousand with a maximum limit of 2 lac");
		else
			printf("you are ensured with a premium of 3 per thousand and the policy amount cannot exceed 1 lac");
	}
	else if(health =='P' && (age>=25 && age<=35) && (city=='V') && (gender == 'M')
		printf("You are insured with a premimum of 6 per thousand and the policy cannot exceed 10k");
	else
		printf("you are not insured");
	
}