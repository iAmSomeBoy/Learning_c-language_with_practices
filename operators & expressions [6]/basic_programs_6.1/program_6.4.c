//PROGRAM6.4 To illustrate regional operators
//[ <  <=  >  >=  ==  != ]
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	c=a<b;
	d=a<=b;
	e=a>b;
	f=a>=b;
	g=a==b;
	h=a!=b;
	
	printf("Less than:\t\t (%d<%d)=%d\n",a,b,c);
	printf("Less than or equal to:\t (%d<=%d)=%d\n",a,b,d);
	printf("Greater than:\t\t (%d>%d)=%d\n",a,b,e);
	printf("Greater than or equal to:(%d>=%d)=%d\n",a,b,f);
	printf("Equal to:\t\t (%d==%d)=%d\n",a,b,g);
	printf("Not equal to:\t\t (%d!=%d)=%d\n",a,b,h);
	
	return(0);
}