#include <stdio.h>
#define COL 5

void copy_change(int row, double (*source)[5], double (*target)[5]);
void show_arr_change(int row, double (*arr)[5]);

int main()
{
	double source[3][5]={{1.1,2.3,3.4,4.1,2.4},{2.4,4.1,2.1,3.2,1.5},{0.9,5.6,4.3,3.6,7.8}};
	double target[3][5]={0.0};
	
	printf("befor copy:\n");
	show_arr_change(3,target);
	
	copy_change(3,source,target);
	
	printf("after copy:\n");
	show_arr_change(3,target);
	
	return 0;
}

void copy_change(int row, double (*source)[5], double (*target)[5])
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<COL; j++)
			target[i][j] = source[i][j];
	}
}

void show_arr_change(int row, double (*arr)[5])
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<COL; j++)
			printf("target[%d][%d]=%.1f \n",i,j,arr[i][j]);
	}
	printf("\n");
}