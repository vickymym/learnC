#include<stdio.h>
#define ROW 4
#define COL 8

int main()
{
	int i=0;
	int j=0;
	
	for(i=0; i< ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}