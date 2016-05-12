#include<stdio.h>

void output(char ch,int col, int row);

int main()
{
	output('A',5,3);
	
	return 0;
}

void output(char ch,int col, int row)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			printf("%c",ch);
		printf("\n");
	}
}