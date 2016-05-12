#include<stdio.h>
#define ROW 6
#define COL 6

int main()
{
	int i=0;
	int j=0;
//	char lets[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch='F';
	
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<=i; j++)
		{
			//printf("%c",lets[5-j]);
			printf("%c",ch-j);
		}
		printf("\n");
	}
	
	return 0;
}

//思考：
//打印如下形式：
//FEDCBA
//FEDCB
//FEDC
//FED
//FE
//F

