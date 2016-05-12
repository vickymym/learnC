#include<stdio.h>

const float EPS =  0.00001;

void Temperatures(double num);

int main()
{
	double fah = 0.0;
	
	printf("enter fahrenheit: ");
	scanf("%lf",&fah);
	
	while(scanf("%lf",&fah))//change
	//while(!(fah >= -EPS && fah <= EPS))
	{
		Temperatures(fah);
		printf("enter next fahrenheit: ");
		
		while(getchar() != '\n')
			continue;
		
		scanf("%lf",&fah);
	}
	return 0;
}

void Temperatures(double num)
{
	const double K1=1.8;
	const double K2=32.0;
	const double K3=273.16;
	double cel,kel;

	cel=K1*num+K2;
	kel=cel+K3;
	
	printf("fahrenheit=%.2lf,celsius=%.2lf,kelvin=%.2lf\n",num,cel,kel);
}