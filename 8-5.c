#include<stdio.h>

int main()
{
	int min=1;
	int max=100;
	int mid=(min+max)/2;
	char ch;
	
	printf("Pick an integer from 1 to 100.I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("a n if it is wrong.\n");
	printf("uh...is your number %d yes or small or big?\n",mid);

	while((ch=getchar()) != 'y')	
	{
		if(ch == 'b')
			max = mid;
		else if(ch == 's')
			min = mid;
		
		mid=(min+max)/2;
		
		printf("uh...is your number %d yes or small or big?\n",mid);
		
		while(getchar() != '\n')
			continue;
	}	
	
	printf("I know I could do it!\n");
	
	return 0;
}