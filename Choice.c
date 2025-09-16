//To input choice.
#include<stdio.h>
int main()
{
	printf("1 Addition.");
	printf("2 Subtraction.");
	printf("3 Multiplication.");
	printf("Enter choice.");
	int choice,number1,number2,ans;
	scanf("%d",&choice);
	printf("Enter 2 numbers.");
	scanf("%d%d",&number1,&number2);
	if(choice==1)
	{
		ans=number1+number2;
	}
	else if(choice==2) 
	{
		ans=number1-number2;
	}
	else if(choice==3)
	{
		ans=number1*number2;
	}
	printf("%d",ans);
}
