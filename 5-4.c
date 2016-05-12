#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCHE_TO_CM 2.54

int main()
{
	float high,inches;
	int feet;
	
	printf("enter a heigt in centimeters:");
	scanf("%f",&high);
	
	while(high>0)
	{
		feet=high/FEET_TO_CM;
		inches=(high-feet*FEET_TO_CM)/INCHE_TO_CM;
		printf("%.1f cm = %d feet,%.1f inches\n",high,feet,inches);
		printf("enter a heigt in centimeters(<=0 to quit):");
		scanf("%f",&high);
	}
	
	printf("Bye!\n");
	
	return 0;
}