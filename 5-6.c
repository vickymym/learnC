#include <stdio.h>

int main()
{
	int count = 0;
	int sum = 0;
	int n = 0;
	
	//count=0;
	//sum=0;
	
	printf("enter the number count you want to calculate:");
	scanf("%d",&n);
	
	while(count < n)
	{
		//sum = sum + count*count;
		sum += count * count;
		printf("%d ge number's pow=%5d\n",count,count*count);
		
		++count;
	}

	printf("sum=%d\n",sum);
	
	return 0;
}