#include<stdio.h>
#include<ctype.h>
#define A 8.75
#define B 9.33
#define C 10.00
#define D 11.20
#define LIMIT1 40
#define LIMIT2 300
#define LIMIT3 150
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define K 1.5

int main()
{
	float per_hour_salary;
	float salary;
	float tax_salary;
	float pure_salary;
	char ch;
	int hour;
	
	printf("***************************************************************\n");
	printf("Enter the char corresponding to the desired pay rate or action:\n");
	printf("a)$8.75/hr		b)$9.33/hr\n");
	printf("c)$10.00/hr		d)$11.20/hr\n");
	printf("q)quit\n");
	printf("***************************************************************\n");
	
	while((ch=getchar()) != 'q')
	{
		//为什么回车符还是能读进来？
		while(getchar() != '\n')
			continue;
		
		if(tolower(ch)<'a' || tolower(ch)>'d')
		{
			if(ch == '\n')
				printf("ce shi:now ch=\\n\n");
			printf("please enter right choice(a,b,c,d,q):\n");
			continue;
		}
		
		switch(ch)
		{
			case 'A':
			case 'a':
					per_hour_salary = A;
					break;
			case 'B':
			case 'b':
					per_hour_salary = B;
					break;
			case 'C':
			case 'c':
					per_hour_salary = C;
					break;
			case 'D':
			case 'd':
					per_hour_salary = D;
					break;
			default:
					printf("plaese enter right choice(a,b,c,d,q):");
					return 0;
		}

		printf("you have select \"%c\" choice,please enter work hour:",ch);
		scanf("%d",&hour);
		
		while(getchar() != '\n')
			continue;
		
		if(hour<LIMIT1)
			salary = per_hour_salary * hour;
		else
			salary = LIMIT1*per_hour_salary + (hour-LIMIT1)*per_hour_salary*K;
		
		if(salary<LIMIT2)
			tax_salary = salary * RATE1;
		else if(salary<=(LIMIT2+LIMIT3))
			tax_salary = LIMIT2*RATE1 + (salary-LIMIT2)*RATE2;
		else
			tax_salary = LIMIT2*RATE1 + LIMIT3*RATE2 +(salary-LIMIT2-LIMIT3)*RATE3;
		
		pure_salary = salary - tax_salary;
	
		printf("all_salary=%.2f,tax_salary=%.2f,pure_salary=%.2f\n",salary,tax_salary,pure_salary);
	}
	
	return 0;
}