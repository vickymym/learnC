#include<stdio.h>

int main()
{
	float num1;
	float num2;
	
/*	printf("enter the first float number:");
	
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
*/
	printf("enter two float numbers:");
	
	while(scanf("%f%f",&num1,&num2) == 2)
	{
		printf("result=%f\n",(num1-num2)/(num1*num2));
		printf("enter two float numbers:");
	}
	
	printf("\n");
	
	return 0;
}