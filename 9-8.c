#include <stdio.h>

double power(double n, int p);

int main()
{
	double x,xpow;
	int exp;
	
	printf("enter a number and a integer power.\n");
	printf("enter q to quit.\n");
	
	while(scanf("%lf%d",&x,&exp) == 2)
	{
		xpow=power(x,exp);
		if(exp < 0)
			xpow = 1.0/xpow;
		printf("%.3f to the power %d is %.5f\n",x,exp,xpow);
		printf("enter next pair of numbers or q to quit.\n");
	}
	
	printf("Bye!\n");
	return 0;
}

double power(double n, int p)
{
	double pow;
	
	if(n == 0)
		pow = 0;
	else
	{
		if(p > 0)
			pow = n * power(n,p-1);
		else if(p < 0)
			pow = n * power(n,p+1);//小于0的情况怎么弄？
		else
			pow = 1;
	}
	
	return pow;
}