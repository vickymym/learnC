#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
	int rand_num;
	int count[10]={0};
	
	srand(time(0));
	
	for(int i=0; i<1000; i++)
	{
		rand_num = rand()%10+1;
		
		count[rand_num - 1] += 1;
	}
	
	for(int i = 0; i < 10; ++i )
		printf("%d : %d\n", i + 1, count[i]);
	
	return 0;
}