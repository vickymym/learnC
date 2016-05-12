#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	float sign;
	float sum1=0.0;
	float sum2=0.0;
	
	printf("enter a unsigned nember:");
	scanf("%f",&n);
	
	for(int i=0; i<n; i++)
	{
		sign = pow(-1.0,i+1);
		sum1 += 1.0/(i+1);
		sum2 += sign/(i+1);
	}
	
	printf("sum1=%f\n",sum1);
	printf("sum2=%f\n",sum2);
	
	return 0;
}