#include<stdio.h>

int main()
{
	int a,b,sum,diff,product,rem,quotient;
	
	printf("Enter Two number\n");
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	rem=a%b;
	
	printf("a=%d b=%d\n",a,b);
	printf("Addition: \t \t %d+%d=%d\n",a,b,sum);
	printf("Substruction:\t \t%d-%d=%d\n",a,b,diff);
	printf("Multiplication:\t\t%d*%d=%d\n",a,b,product);
	printf("Divion:\t\t%d/%d=%d\n",a,b,quotient);
	printf("Reminder:\t\t%d%%d=%d",a,b,rem);
	return (0);
}