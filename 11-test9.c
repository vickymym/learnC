#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define ANSWER "Grant"
#define MAX 40

int main()
{
	char try[MAX];
	int i=0;
	
	puts("Who is buried in Grant's tomb?");
	gets(try);
	while(*(try+i))
	{
		try[0]=toupper(try[0]);
		try[i+1]=tolower(*(try+i+1));
		i++;
	}
	
	while(strcmp(try,ANSWER) != 0)
	{
		puts("No,that's wrong. Try again.");
		gets(try);
		while(*(try+i))
		{
			toupper(try[0]);
			tolower(*(try+i));
			i++;
		}
	}
		
	puts("That's right!");
	
	return 0;
}