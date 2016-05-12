#include <stdio.h>

void fun(float n);

int main()
{
	float num = 0.0;
	printf("enter a float number:");
	scanf("%f",&num);
	
	printf("num=%.1f\n",num);
	
	fun(num);
	
	return 0;
}

void fun(float n)
{
	//float s;
	//s=n*n*n;
	printf("%.1f de san ci fang shi %.2f\n", n, n*n*n);
}