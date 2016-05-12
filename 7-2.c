#include<stdio.h>

int main()
{
	char ch;
	int count=0;
	
	while((ch = getchar()) != '#')
	{
		count++;
	
		printf("%c/%d ",ch,ch);
		if(count % 8 == 0)
			printf("\n");
	}
	
	return 0;
}