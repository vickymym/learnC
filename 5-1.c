#include <stdio.h>

int main()
{
	int n;
	int hour,minute;
	const int MIN=60;
	
	printf("enter a number(<=0 to quit):");
	scanf("%d",&n);
	
	while(n>0)
	{
		hour=n/MIN;
		minute=n%MIN;
		printf("%d is %d hours and %d minutes.\n",n,hour,minute);
		printf("enter next number(<=0 to quit):");
		scanf("%d",&n);
	}
	
	printf("Done!\n");
	
	return ;
}
