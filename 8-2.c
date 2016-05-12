#include<stdio.h>

int main()
{
	char ch;
	int i=1;
	
	while((ch=getchar()) != EOF)
	{
		if(i % 10 == 0 && ch != '\n')
			printf("\n");
		else
		{
			if(ch < 32)
			{
				if(ch == '\n')
					printf("\\n-%d ",ch);
				else if(ch == '\t')
					printf("\\t-%d ",ch);
				else
					printf("^%c-%d ",ch+64,ch);
			}
			else
				printf("%c-%d ",ch,ch);
		}
		
		i++;
	}
	
	printf("\n");
	
	return 0;
}