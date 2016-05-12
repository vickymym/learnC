#include<stdio.h>

int main()
{
	char ch;
	int flag=0;
	
	while((ch = getchar()) != '#')
	{
		if(ch == '.')
		{
			printf("!");
			flag++;
		}
		else if(ch == '!')
		{
			printf("!!");
			flag++;
		}
		else
			printf("%c",ch);
	}
	
	printf("there are all %d times replace!\n",flag);
	
	return 0;
}