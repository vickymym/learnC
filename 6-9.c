#include<stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("enter lower and upper integer limits:");
	
	while(scanf("%d %d",&num1,&num2))
	{
		if(num1 < num2)
		{
			int sum=0;
			//平方和
			for(int i=num1; i<=num2; ++i)
			{
				sum += i*i;
			}
			printf("the sums of the squares from %d to %d is %d\n",num1*num1,num2*num2,sum);
			printf("enter next set of limits:");
		}
		else
		{
			printf("Done\n");
			break;
		}
	}
	
	return 0;
}