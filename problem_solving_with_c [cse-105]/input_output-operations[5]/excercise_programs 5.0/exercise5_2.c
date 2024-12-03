/*
5.2 To accept two integers(left justified)
two double values(right justified and two digits after decimal point)
*/
#include<stdio.h>
int main()
{
	int a,b;
	double c,d;
	printf("Enter two integers ");
	scanf("%d %d", &a, &b);
	printf("\n");
	printf("Enter two double values");
	scanf("%lf %lf", &c, &d);
	printf("\n");
	printf("%-7d %-7d\n", a,b);
	printf("%7.2lf %7.2lf", c,d);
	
	return(0);
}
    