#include<stdio.h>

float fun(float num1,float num2);

int main()
{
	float num1;
	float num2;
	
	printf("enter the first float number:");
	
	while(!scanf("%f",&num1))
	{
		printf("enter the first right float number again:");
		
		while(getchar() != '\n')
			continue;
	}
	
	printf("enter the second float number:");
	
	while(!scanf("%f",&num2))
	{
		printf("enter the second right float number again:");
		
		while(getchar() != '\n')
			continue;
	}
	
	printf("result=%f\n",fun(num1,num2));
	
	return 0;
}

float fun(float num1,float num2)
{
	return (num1-num2)/(num1*num2);
}