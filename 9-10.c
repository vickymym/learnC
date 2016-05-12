#include <stdio.h>

int Fibonacci(int n);

int main()
{
	int num;
	int result;
	
	printf("enter the count you want to calculate:");
	while(scanf("%d",&num) == 1)
	{
		result = Fibonacci(num);
		printf("the result is %d\n",result);
		printf("enter the next count:");
	}
	
	printf("Bye!\n");
	
	return 0;
}

int Fibonacci(int n)
{
	int a=1;
	int b=1;
	int sum=0;
	
	if(n == 1 || n== 2)
		sum = 1;
	
	for(int i=3; i<=n; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	
	return sum;
}