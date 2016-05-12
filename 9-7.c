#include<stdio.h>

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
		printf("%.3f to the power %d is %.5f\n",x,exp,xpow);
		printf("enter next pair of numbers or q to quit.\n");
	}
	
	printf("Bye!\n");
	
	return 0;
}

double power(double n, int p)
{
	double pow=1;
	int exp;
	
	if(p == 0 && n != 0)
	{
		exp = 0;
		pow = 1;
	}
	else if(p > 0)
		exp = p;
	else
		exp = -p;
	
	for(int i=0; i<exp; i++)
	{
		if(n == 0 && p != 0)
		{
			pow = 0;
			break;
		}
		if(p<0)
			pow *= (double)1/n;
		else
			pow *= n;
	}
	
	return pow;
}