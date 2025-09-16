#include<stdio.h>
int main()
{//Area of circle.
	const float PI=3.14;
	float radius,area;
	printf("Enter Radius.");
	scanf ("%f",&radius);
	if(radius>0)
	{area=PI*radius*radius;
	printf("%f",area);
	}
	else
	{printf("Invalid radius,value should be greater than 0");
	}
	//Area of rectangle.
	float length,breadth;
	printf("\nEnter Length & Breadth");
	scanf("%f %f",&length,&breadth);
	if 
	(length>0 && breadth>0)
{
		area=length*breadth;
	printf("%f%f",area);
	}
	else{
		printf("Invalid!! Value should be greater than 0.");
	}
	// Area of square. 
	float side;
	printf("\nEnter Side");
	scanf("%f",&side);
	if(side>0)
	{ area=side*side;
	printf("%f",area);
	}
	else
	{
		printf("Invalid!! Value should be greater than 0.");
	}

	
	
	
		}
	
