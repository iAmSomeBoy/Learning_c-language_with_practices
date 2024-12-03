#include<stdio.h>
int main()
{
    int num,sum,rem,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp /= 10;
    }

    if(sum==num)
    {
        printf("Armstrong NUmber");
    }else
    {
        printf("Not a Armstrong NUmber");
    }



    return (0);
}