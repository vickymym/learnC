#include<stdio.h>
#define PER_HOUR_SALARY 10
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
	
	printf("enter the hours per week:");
	scanf("%d",&hour);
	
	if(hour <= 40)
		salary = hour*PER_HOUR_SALARY;
	else
		salary = 40*PER_HOUR_SALARY + 1.5*PER_HOUR_SALARY*(hour-40);
	
	if(salary <= 300)
		tax_salary = TAX_RATE1*salary;
	else if(salary <= 450)
		tax_salary = TAX_RATE1*300 + TAX_RATE2*(salary-300);
	else
		tax_salary = TAX_RATE1*300 + TAX_RATE2*150 + TAX_RATE3*(salary-300-150);
	
	pure_salary = salary - tax_salary;
	
	printf("salary=%.2f, tax_salary=%.2f, pure_salary=%.2f\n",salary,tax_salary,pure_salary);
	
	return 0;
}