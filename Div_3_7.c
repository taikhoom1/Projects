//Number is divisible by 3 and 7.
#include<stdio.h>
int main()
{
	int number;
	printf("Enter Number.");
	scanf("%d",&number);
//	if(number%3==0 && number%7==0)
//	{
//		printf("It is divisible.");
//	}
//	else
//	{
//		printf("It is not divisible.");
//	}
if(number%3==0 || number%7==0)
{
	printf("It is Div.");
}
else
{
	printf("It is not div.");
}
}
