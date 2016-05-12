#include <stdio.h>

void show_arr(int arr[][5], int row);
void double_arr(int arr[][5], int n);

int main()
{
	int source[3][5]={{1,2,3,4,5},{6,7,8,9,0},{1,3,5,7,9}};
	
	printf("befor double:\n");
	show_arr(source,3);
	double_arr(source,3);
	printf("after double:\n");
	show_arr(source,3);
	
	return 0;
}

void show_arr(int arr[][5], int row)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
			printf("%d ",arr[i][j]);
	}
	
	printf("\n");
}

void double_arr(int arr[][5], int row)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
			arr[i][j] = 2*arr[i][j];
	}
}