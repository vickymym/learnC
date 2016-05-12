#include<stdio.h>

int main()
{
	int num;
	int even_count=0;
	int odd_count=0;
	int even_sum=0;
	int odd_sum=0;
	
	while(scanf("%d",&num) && num != 0)
	{
		switch(num%2)
		{
			case 0:
					even_count++;
					even_sum += num;
					break;
			default:
					odd_count++;
					odd_sum += num;
					break;
		}
	}
	
	printf("all even count= %d and average= %.0f\n",even_count,(float)even_sum/even_count);
	printf("all odd count= %d and average= %.0f\n",odd_count,(float)odd_sum/odd_count);
	
	return 0;
}