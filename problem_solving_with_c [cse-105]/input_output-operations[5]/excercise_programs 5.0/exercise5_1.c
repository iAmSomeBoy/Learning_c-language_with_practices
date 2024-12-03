//5.1 To accept length and breadth of a rectangle and find 
#include<stdio.h>
int main()
{
	int l, b, a;
	printf("Enter length and breadth of rectangle \n");
	scanf("%d %d", &l, &b);
	a=l*b;
	printf("Area of rectangle= %d",a);
	
	return(0);
}