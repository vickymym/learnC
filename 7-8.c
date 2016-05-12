#include<stdio.h>
#define PER_HOUR_SALARY1 8.75
#define PER_HOUR_SALARY2 9.33
#define PER_HOUR_SALARY3 10.00
#define PER_HOUR_SALARY4 11.20
#define RATE 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25

int main()
{
	int hour;
	float salary=0.0;
	float tax_salary=0.0;
	float pure_salary=0;
	int num;
	int per_hour_salary;
	
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr			2) $9.33/hr\n");
	printf("3) $10.00/hr			4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
		
	while(scanf("%d",&num))
	{
		if(!(num>=1 && num<=5))
		{
			printf("please enter right num(num>=1 && num<=5):");
			continue;
		}
		
		switch(num)
		{
			case 1:
					per_hour_salary = PER_HOUR_SALARY1;
					break;
			case 2:
					per_hour_salary = PER_HOUR_SALARY2;
					break;
			case 3:
					per_hour_salary = PER_HOUR_SALARY3;
					break;
			case 4:
					per_hour_salary = PER_HOUR_SALARY4;
					break;
			case 5:
					return 0;
		}
		
		printf("enter the hours per week:");
		scanf("%d",&hour);
		
		if(hour <= 40)
			salary = hour*per_hour_salary;
		else
			salary = 40*per_hour_salary + 1.5*per_hour_salary*(hour-40);
		
		if(salary <= 300)
			tax_salary = TAX_RATE1*salary;
		else if(salary <= 450)
			tax_salary = TAX_RATE1*300 + TAX_RATE2*(salary-300);
		else
			tax_salary = TAX_RATE1*300 + TAX_RATE2*150 + TAX_RATE3*(salary-300-150);
		
		pure_salary = salary - tax_salary;
		
		printf("salary=%.2f, tax_salary=%.2f, pure_salary=%.2f\n",salary,tax_salary,pure_salary);
	}
	
	return 0;
}