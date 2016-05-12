#include<stdio.h>
#define PER_POUND_ARTICHOKE 1.25
#define PER_POUND_BEET 0.65
#define PER_POUND_CARROT 0.89

int main()
{
	char ch;
	float artichoke_pound;
	float beet_pound;
	float carrot_pound;
	float sum;
	float discount;
	float traffic;
	
	printf("please enter what kinds of vegetables you want:\n");
	printf("\'a\' means artichoke\n");
	printf("\'b\' means beet\n");
	printf("\'c\' means carrot\n");
	
	while((ch=getchar()) != 'q')
	{
		switch(ch)
		{
			case 'a':
					printf("enter the artichoke pounds you want:");
					scanf("%f",&artichoke_pound);
					printf("enter the kinds of vegetables you want(a,b,c,q):");
					continue;
			case 'b':
					printf("enter the beet pounds you want:");
					scanf("%f",&beet_pound);
					printf("enter the kinds of vegetables you want(a,b,c,q):");
					continue;
			case 'c':
					printf("enter the carrot pounds you want:");
					scanf("%f",&carrot_pound);
					printf("enter the kinds of vegetables you want(a,b,c,q):");
					continue;
		}
	}
	
	printf("%10s%10s%10s%10s\n"," ","artichoke_pound","beet","carrot");
	printf("%10s%10.2f%10.2f%10.2f\n","price",PER_POUND_ARTICHOKE,PER_POUND_BEET,PER_POUND_CARROT);
	printf("%10s%10.2f%10.2f%10.2f\n","pound",artichoke_pound,beet_pound,carrot_pound);
	printf("%10s%10.2f%10.2f%10.2f\n","charge",PER_POUND_ARTICHOKE*artichoke_pound,PER_POUND_BEET*beet_pound,PER_POUND_CARROT*carrot_pound);
	
	sum = PER_POUND_ARTICHOKE*artichoke_pound + PER_POUND_BEET*beet_pound + PER_POUND_CARROT*carrot_pound;
	
	if(sum >= 100)
		discount = sum * 0.05;
	else
		discount = 0.0;
	
	printf("discount=%.2f\n",discount);
	
	if(artichoke_pound+beet_pound+carrot_pound <= 5)
		traffic = 3.50;
	else if(artichoke_pound+beet_pound+carrot_pound < 20)
		traffic = 10.0;
	else
		traffic = 8+(artichoke_pound+beet_pound+carrot_pound)*0.1;
	
	printf("traffic=%.2f\n",traffic);
	
	sum = sum - discount + traffic;

	printf("sum=%.2f\n",sum);
	
	return 0;
}