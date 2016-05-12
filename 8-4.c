#include<stdio.h>

int main()
{
	char former= '\0';
	char present;
	int word_count=0;
	int char_count=0;
	
	int nTotalSize = 0;
	
	while((present=getchar()) != EOF)
	{
		if(!isspace(present) && !ispunct(present))
		{
			former = present;
			char_count++;
		}
		else if(flag != 0)
		{
			word_count++;
			printf("the %d word have %d char\n",word_count,char_count);
			char_count=0;
		}
		
/*		if(former == '\0')
			former = present;
		
		//if(isspace(former))
			//continue;
		
		if(!isspace(present) && !ispunct(present))
		{
			nTotalSize += 1;
		}
		
		if(isspace(present) || ispunct(present) && !(isspace(former) && ispunct(former)))
		{
			word_count += 1;
		}
		
		former = present;
*/
	}
	
	
//	printf("the %d word have %d char\n",word_count,nTotalSize);		
	
	printf("this setence have %d words\n",word_count);
	
	return 0;
}