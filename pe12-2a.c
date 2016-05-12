#include "pe12-2a.h"
static int mode;
static float distance=0.0;
static float fule=0.0;

int main()
{
	int mode;
	
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode: ");
		printf("(-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	
	return 0;
}

void set_mode(int formal_mode)
{
	switch(formal_mode)
	{
		case 0:
			mode = 0;
			break;
		case 1:
			mode = 1;
			break;
		default:
			printf("Invalid mode specified.Mode 1 (US) used.\n");
			mode = 1;
			break;
	}
}

void get_info()
{
	if(!mode)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%f",&distance);
		printf("Enter fule consumed in liters: ");
		scanf("%f",&fule);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%f",&distance);
		printf("Enter fule consumed in gallons: ");
		scanf("%f",&fule);
	}
}

void show_info()
{
	if(!mode)
		printf("Fule consumption is %.2f liters per 100 km.\n",fule/(distance/100));
	else
		printf("Fule consumption is %.2f miles per gallon.\n",distance/fule);
}