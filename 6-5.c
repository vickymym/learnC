#include<stdio.h>

int main()
{
	int min;
	int max;
	
	printf("enter two int number:");
	
	while(!scanf("%d %d",&min,&min))//修改这种情况读入a 5怎么办？
	{
		if(min > max)
			printf("enter two int number(first less than second):");
		else
			continue;
	}
	
	printf("int  square  vocabulary  \n");
	
	for(; min<=max; min++)
	{
		printf("%-5d %-6d %-14d\n",min,min*min,min*min*min);
	}
	
	return 0;
}