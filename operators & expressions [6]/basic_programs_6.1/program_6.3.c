/*To illustrate operator precedence in arithmetic operators
(  unary+ unary-  + - * / %  ) */
#include<stdio.h>
int main()
{
	int a=4, b=6, c=3, d, e, f, g;
	d= -a+b*c;
	e= (a+b)*c;
	f= a*b/c;
	g= a*(b/c);
	printf("a=%d b=%d c=%d \n\n",a,b,c);
	printf("-%d+%d*%d=%d\n",a,b,c,d);
	printf("(%d+%d)*%d=%d\n",a,b,c,e);
	printf("%d*%d//%d=%d\n",a,b,c,f);
	printf("%d*(%d//%d)=%d\n",a,b,c,g);
	
	return(0);
}