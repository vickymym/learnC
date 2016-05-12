#include<stdio.h>
#include<ctype.h>

int check_position(char ch);

int main()
{
	char ch;
	int num;
	
	while((ch=getchar()) != EOF)
	{
		num = check_position(ch);
		while(getchar() != '\n')
			continue;
	}
		
	return 0;
}

int check_position(char ch)
{
	int location;
	
	if(isalpha(ch))
	{
		printf("it's a char!\n");
		location = tolower(ch) - 'a' + 1 ;
	/*	if(islower(ch))
			location = ch-'a'+1;
		else if(isupper(ch))
			location = ch-'A'+1;
	*/
		printf("it's position is %d\n",location);
	}
	else
	{
		location = -1;
		printf("sorry,it's not a char!\n");
	}
	
	return location;
}