#include <stdio.h>

void get_info(int mode, float* p_distance, float* p_fule);
int set_mode(int mode);
void show_info(int mode, float distance, float fule);

int main()
{
	int mode;
	float distance=0.0;
	float fule=0.0;
	
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0)
	{
		mode = set_mode(mode);
		get_info(mode,&distance,&fule);
		show_info(mode,distance,fule);
		printf("Enter 0 for metric mode, 1 for US mode: ");
		printf("(-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("Done.\n");
	
	return 0;
}

int set_mode(int mode)
{
	switch(mode)
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
	
	return mode;
}
	float fule;
	
	if(!mode)
	{
		printf("Enter fule consumed in liters: ");
		scanf("%f",&fule);
	}
	else
	{
		printf("Enter fule consumed in gallons: ");
		scanf("%f",&fule);
	}
	
	return fule;
}

//如果还是用一个函数，需要传递指针
void get_info(int mode, float* p_distance, float* p_fule)
{
	if(!mode)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%f",p_distance);
		printf("Enter fule consumed in liters: ");
		scanf("%f",p_fule);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%f",p_distance);
		printf("Enter fule consumed in gallons: ");
		scanf("%f",p_fule);
	}
}

void show_info(int mode, float distance, float fule)
{
	if(!mode)
		printf("Fule consumption is %.2f liters per 100 km.\n",fule/(distance/100));
	else
		printf("Fule consumption is %.2f miles per gallon.\n",distance/fule);
}