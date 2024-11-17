/*A university has the following rules for a student to qualify
for a degree with A as the main subject and B as the
subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or
more in B.
(b) If he gets less than 55 percent in A he should get 55 percent or
more in B. However, he should get at least 45 percent in
A.
(c) If he gets less than 45 percent in B and 65 percent or more
in A he is allowed to reappear in an examination in B to
qualify.
(d) In all other cases he is declared to have failed.
Write a program to receive marks in A and B and Output
whether the student has passed, failed or is allowed to
reappear in B. */
// In this question for the second option it is less than 55 percent.
#include<stdio.h>
int main()
{
	int marks_a,marks_bl
	printf("enter the marks scored in a subject");
	scanf("%d",&marks_a);
	printf("enter the marks scored in b subject");
	scanf("%d",&marks_b);
	if(marks_a>55 && marks_b >45)
		printf("the student has passed")
	else if(marks_a<55 && marks_b>55 && marks_a>=45)
		printf("the student has pased");
	else if(marks_b<45 && marks_a>=65)
		printf("you can reappear for the exam");
	else
		printf("the student failed");
	
}