#include<stdio.h>
#define ROW 5
#define COL 5

int main()
{
	int i=0;
	int j=0;
	
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("$");
		}
		printf("\n");
		
	}
	return 0;
}