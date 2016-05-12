#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	char ch;
	int words_count=0;
	int upper_count=0;
	int lower_count=0;
	int punct_count=0;
	int number_count=0;
	bool flag=false;
	
	while((ch=getchar()) != EOF)
	{
		if(!isspace(ch) && !ispunct(ch) && !flag)
		{
			flag=true;
		}
		if((isspace(ch) || ispunct(ch)) && flag)
		{
			words_count++;
			flag=false;
		}
			
		
		if(isupper(ch))
			++upper_count;
		
		if(islower(ch))
			++lower_count;
		
		if(ispunct(ch))
			++punct_count;
		
		if(isalnum(ch) && !isalpha(ch))
			++number_count;
	}
	
	printf("there is %d words\nthere is %d upper letters\n"
	"there is %d lower letters\n"
	"there is %d punct letters\n"
	"there is %d numbers\n",words_count,upper_count,lower_count,punct_count,number_count);
	
	return 0;
}