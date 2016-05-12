#include<stdio.h>

int main()
{
//	int all_count=0;
	int even_count=0;
	int odd_count=0;
	int num;
//	int all_sum=0;
	int even_sum=0;
	int odd_sum=0;
	
	while(scanf("%d",&num) && num != 0)
	{
		//all_count++;
		//all_sum += num;
		
		if(num % 2 == 0)
		{
			even_count++;
			even_sum += num;
		}
			
		else
		{
			odd_count++;
			odd_sum += num;
		}
	}
	
	printf("all even count= %d and average= %.0f\n",even_count,(float)even_sum/even_count);
	printf("all odd count= %d and average= %.0f\n",odd_count,(float)odd_sum/odd_count);
	
	return 0;
}