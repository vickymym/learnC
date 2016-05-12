#include<stdio.h>
#include<ctype.h>

char get_first(void);

int main()
{
	char ch;
	
	ch = get_first();
	
	printf("%c\n",ch);
	
	return 0;
}

char get_first()
{
	char ch;
	
	while(isspace(ch=getchar()))
		continue;
	
	return ch;
}