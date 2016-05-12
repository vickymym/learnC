#include<stdio.h>

double xiejun(double num1, double num2);

int main()
{
	double num;
	
	num=xiejun(2.3,5.6);
	
	printf("result=%f\n",num);
	
	return 0;
}

double xiejun(double num1, double num2)
{
	double result;
	
	if(num1 != 0 && num2 != 0)
	{
		result = 2/(1/num1+1/num2);
	}
	
	return result;
}
