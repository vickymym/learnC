#include<stdio.h>

int main()
{
	int count=0;
	char ch;
	
	while((ch=getchar()) != EOF)
		count++;
	
	printf("count=%d\n",count);
	
	return 0;
}