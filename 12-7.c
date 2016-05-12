#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rollem(int sides);
int roll_n_dice(int dice, int sides);
int main()
{
	int set;
	int sides;
	int dice;
	int roll;
	
	srand((unsigned int)time(0));
	
	printf("Enter the number of sets; enter q to stop.\n");
	while(scanf("%d",&set) == 1 && set > 0)
	{
		printf("How many sides and how many dice?\n");
		scanf("%d%d",&sides,&dice);
		
		printf("Here are %d sets of %d %d-sides throw.\n",set,dice,sides);
		for(int i=0; i<set; i++)
		{
			roll = roll_n_dice(dice,sides);
			printf("%d ",roll);
		}
		printf("\n");
		
		printf("How many sets? Enter q to stop.\n");
	}
	
	return 0;
}

int rollem(int sides)
{
	int roll;
	
	roll = rand()%sides+1;
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int total = 0;
	if(sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	
	if(dice < 1)
	{
		printf("Need at least 1 dice.\n");
		return -1;
	}
	
	for(int i=0; i<dice; i++)
		total += rollem(sides);
	
	return total;
}