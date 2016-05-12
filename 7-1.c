#include<stdio.h>

int main()
{
	int black_count=0;
	int n_count=0;
	int other_count=0;
	char ch;
	
	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
			black_count++;
		else if(ch == '\n')
			n_count++;
		else
			other_count++;
	}
	
	printf("black_count=%d\n,n_count=%d\n,other_count=%d\n",black_count,n_count,other_count);
	
	return 0;
}