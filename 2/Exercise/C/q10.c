/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line. */
#include <stdio.h>
int main()
{
printf("enter the values of x");
scanf("%d%d%d",&x1,&x2,&x3);
printf("enter the values of y");
scanf("%d%d%d",&y1,&y2,&y3);
/* if this condition is satisfied - x1(y2 – y3) + x2(y3 – y1) + x3(y1 – y2) = 0
*/
if((x1*(y2-y3))+(x1*(y2-y3))+(x1*(y2-y3))==0)
	printf("these point lie in straight line");
else
	printf("they do not lie in straight line");

}