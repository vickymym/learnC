#include <stdio.h>

char get_choice();
char get_first();
void count();

int main()
{
	int choice;
	
	while((choice=get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a':
					printf("Buy low,sell high.\n");
					break;
			case 'b':
					putchar('\a');
					break;
			case 'c':
					count();
					break;
			default:
					printf("Program error!\n");
					break;					
		}
	}
	return 0;
}

char get_choice()
{
	int ch;
	
	printf("Enter the letter of your choice: \n");
	printf("a. advice	b. bell\n");
	printf("c. count	q. quit\n");
	
	ch=get_first();
		
	while((ch<'a' || ch>'c') && ch!='q')
	{
		printf("please respond with a,b,c,or q.\n");
		ch=get_first();
	}
	
	return ch;
}

char get_first()
{
	int ch;
	
	while((ch=getchar()) == '\n' || ch == '\t' || ch == ' ')
		continue;
		
//	while(getchar() != '\n')
//		continue;
	return ch;
}

void count()
{
	int n,i;
	
	printf("Count how far? Enter an integer:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
		printf("%d\n",i);
//	while(getchar() != '\n')
//		continue;
}