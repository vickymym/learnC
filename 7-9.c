#include<stdio.h>
#include<stdbool.h>

int main()
{
	int num;
	bool isprime=true;
	
	printf("enter a integer number:");
	scanf("%d",&num);
	
	while(num > 0)
	{
		for(int i=1; i<=num; i++)
		{
			if(num%i==0 && i!=1 && i!=num)
			{
				isprime = false;
				break;
			}
		}
			
		if(isprime && num!=1)
			printf("%d\n",num);
		
		--num;
		
		isprime = true;
	}
	
	return 0;
}