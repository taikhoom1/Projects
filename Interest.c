#include<stdio.h>
int main()
{
	float principle_amount=10000,rate_of_interest=10,no_of_years=2;
	float interest;
	interest=(principle_amount*rate_of_interest*no_of_years)/100;
	printf("%f",interest);
}
