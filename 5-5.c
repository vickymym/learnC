#include <stdio.h>

int main()
{
/*	int count,sum;
	
	count=0;
	sum=0;
	while(count++ < 20)
		sum = sum + count;
	printf("sum=%d\n",sum);
*/
	int count,sum,n;
	
	count=0;
	sum=0;
	
	printf("enter the number count you want to calculate:");
	scanf("%d",&n);
	
	while(count++ < n)
		sum = sum + count;
	printf("sum=%d\n",sum);
	
	return 0;
}