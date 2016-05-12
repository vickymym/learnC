#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	int low_count=0;
	int up_count=0;
	
	while((ch=getchar()) != EOF)
	{
		if(islower(ch))
			low_count++;
		else if(isupper(ch))
			up_count++;
	}
	
	printf("lower_count=%d,up_count=%d\n",low_count,up_count);
	
	return 0;
}