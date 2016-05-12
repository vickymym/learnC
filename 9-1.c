#include<stdio.h>

double min(double x, double y);

int main()
{
	double num1,num2;
	
	printf("enter two double number:");
	scanf("%lf%lf",&num1,&num2);
	printf("the min num is %f\n",min(num1,num2));
	
	return 0;
}

double min(double x, double y)
{
	return x>y?y:x;
}