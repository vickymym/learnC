#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void per_year_rainfall(float arr[][MONTHS], int year);
void month_rainfall(float arr[][MONTHS], int year);

int main()
{
	float rain[YEARS][MONTHS]={
	{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
	{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
	{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
	{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
	{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	
	float subtot,per_year_total,all_year_total;
	
	printf("YEAR	RAINFALL(inches) \n");
	
	//每年的降水总量
	per_year_rainfall(rain,YEARS);
	
	printf("MONTHLY AVERAGES: \n\n");
	printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	//每年每月的降水总量
	month_rainfall(rain,YEARS);
	
	printf("\n");
	
	return 0;
}

void per_year_rainfall(float arr[][MONTHS], int year)
{
	float per_year_total=0.0;
	float all_year_total=0.0;
	
	for(int i=0; i<year; i++)
	{
		for(int j=0; j<MONTHS; j++)
			per_year_total += arr[i][j];
		printf("%5d %15.1f\n",2000+i, per_year_total);
		all_year_total += per_year_total;
		per_year_total = 0.0;
	}
	printf("\nThe yearly average is %.1f inches.\n\n",all_year_total/YEARS);
}

void month_rainfall(float arr[][MONTHS], int year)
{
	float month_total=0.0;
	
	for(int j=0; j<MONTHS; j++)
	{
		for(int i=0; i<year; i++)
			month_total += arr[i][j];
		printf("%4.1f  ",month_total/YEARS);
		month_total = 0.0;
	}
}