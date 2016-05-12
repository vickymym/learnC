#include <stdio.h>

void row_average(double arr[][5], int row);
void all_average(double arr[][5], int row);
void max(double arr[][5], int row);
void arr_show(double arr[][5], int row);

int main()
{
	double arr[3][5]={0.0};
	
	printf("please input 15 double number:\n");
	
	//存储信息
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<5; j++)
			scanf("%lf",&arr[i][j]);
	}
	
	row_average(arr,3);
	all_average(arr,3);
	max(arr,3);
	arr_show(arr,3);
	
	return 0;
}
//每个数集的平均值
void row_average(double arr[][5], int row)
{
	double average=0.0;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
			average += arr[i][j];
		printf("%d row average is %.1f\n",i+1,average/5);
		average=0.0;
	}
}

//所有数值的平均值
void all_average(double arr[][5], int row)
{
	double total=0.0;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
			total += arr[i][j];
	}
	
	printf("all_average=%.1f\n",total/(row*5));
}

//最大值
void max(double arr[][5], int row)
{
	double m = arr[0][0];
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(m < arr[i][j])
				m = arr[i][j];
		}
	}
	
	printf("max=%.1f\n",m);
}

//打印
void arr_show(double arr[][5], int row)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<5; j++)
			printf("%.1f ",arr[i][j]);
	}
	
	printf("\n");
}