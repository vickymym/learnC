#include<stdio.h>
#define WEEK 7

int main()
{
	int day,w,left;
	
	printf("enter a number as days(<=0 to quit):");
	scanf("%d",&day);
	
	while(day > 0)
	{
		w=day/WEEK;
		left=day%WEEK;
		printf("%d days are %d weeks,%d days.\n",day,w,left);
		printf("enter next number as days(<=0 to quit):");
		scanf("%d",&day);
	}
	
	printf("Bye!\n");
	
	return 0;
}