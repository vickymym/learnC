#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.28

int main()
{
	char ch;
	float salary;
	float tax_salary;
	
	while(scanf("%c %f",&ch,&salary)) 
	{
		while(getchar() != '\n')
			continue;
		//单身
		if(ch == 'd' && salary <= 17850)
			tax_salary = salary*RATE1;
		else if(ch == 'd' && salary > 17850)
			tax_salary = 17850*RATE1 + (salary-17850)*RATE2;
		//户主
		if(ch == 'h' && salary <= 23900)
			tax_salary = salary*RATE1;
		else if(ch == 'h' && salary > 23900)
			tax_salary = 23900*RATE1 + (salary-23900)*RATE2;
		//已婚，共有
		if(ch == 'g' && salary <= 29750)
			tax_salary = salary*RATE1;
		else if(ch == 'g' && salary > 29750)
			tax_salary = 29750*RATE1 + (salary-29750)*RATE2;
		//已婚，离异
		if(ch == 'l' && salary <= 14875)
			tax_salary = salary*RATE1;
		else if(ch == 'l' && salary > 14875)
			tax_salary = 14875*RATE1 + (salary-14875)*RATE2;
		
		printf("your choice result is:%.2f\n",tax_salary);//为什么第二次输入时，会输出两次(因为它会把回车也当做一个输入，加13、14行就不会了)
	}
	
	return 0;
}

		