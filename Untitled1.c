''#include<stdio.h>
int main()
{
//float p_amount,r_o_i,n_o_y;
//float interest;
//printf("Enter Values.");
//scanf("%f %f %f",&p_amount,&r_o_i,&n_o_y);
//interest=(p_amount*r_o_i*n_o_y)/100;
//printf("%f",interest);
//	 Area of circle
//	const float PI=3.14;
//	float radius,area;
//	printf("Enter radius.");
//	scanf("%f",&radius);
//		if(radius>0)
//		{area=PI*radius*radius;
//		printf("%f",area);}
//		else
//		{
//			printf("Invalid!! Enter value greater than 0.");
//		}
//		//Area of rectangle
//		float length,breadth;
//		printf("Enter Length & Breadth.");
//		scanf("%f%f",&length,&breadth);
//		
//		if(length>0 && breadth>0)
//		{
//			area=length*breadth;
//			printf("%f%f",area);
//			}
//		else{
//			printf("Invalid!! Enter value greater than 0.");
//		}
//		
//**********************************************************************************		
	//This program is for calculating compound interest.
	float principle_amount,rate_of_interest,no_of_years;
	float amount,compound_interest;
	printf("Enter values.");
	scanf("%f %f %f",&principle_amount,&rate_of_interest,&no_of_years);
	amount=principle_amount*(1+rate_of_interest/100)*no_of_years;
	printf("%f",amount);
	compound_interest=amount-principle_amount;
	printf("\n%f",compound_interest);
	
}



