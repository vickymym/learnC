#include<stdio.h>
#include<math.h>

int main()
{
	float Money = 100.0;
	int i=0;
	
	for(i=0; Money>0; i++)
	{
		Money *= (1+0.08);
		printf(" Before year : %d, mongey : %f\n", i + 1, Money);
		Money -= 10;
		printf(" After  year : %d, mongey : %f\n\n", i + 1, Money);
	}
	
	printf("need %d year\n",i);
	
	return 0;
}