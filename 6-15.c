#include<stdio.h>
#include<math.h>

int main()
{
	float Da_Sum_Money = 0.0;
	float De_Sum_Money = 0.0;
	int year=1;
	
	for(year=1; Da_Sum_Money>=De_Sum_Money; year++)
	{
		Da_Sum_Money = 100+100*0.1*year;
		De_Sum_Money = 100*pow(1+0.05,year);
	}
	
	printf("after %d year,De's money more than Da's money\n",year);
	printf("Now Da's money is %f,De's money is %f\n",Da_Sum_Money,De_Sum_Money);
	
	return 0;
}