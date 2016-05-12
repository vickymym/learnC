#include<stdio.h>

int add(int a, int b);
int get_int();

//9-4
int main()
{
	int num1,num2;
	int sum;

	printf("enter the first number:");
	num1=get_int();
	printf("enter the second number:");
	num2=get_int();
	
	sum=add(num1,num2);
	
	printf("%d + %d = %d\n",num1,num2,sum);
	
	return 0;
}

int get_int()
{
	int num;
	char arr[50];
	
	while(scanf("%d",&num) != 1)
	{
		gets(arr);
		printf("%s is not a number,please enter a integer num,such as 2:",arr);
		continue;
	}
	while(getchar() != '\n')
		continue;
	return num;
}

int add(int a, int b)
{
	return a+b;
}
