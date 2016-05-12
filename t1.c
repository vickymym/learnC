#include<stdio.h>   
#include<ctype.h>   
#include<stdbool.h>      
int main(void)  
{        	
	char ch;       
	int words = 0;       
	int n_words = 0;       
	bool inwords = false;        
	while((ch = getchar()) != EOF)       
	{           
		if(!ispunct(ch) && (!isspace(ch)))               
			words++;           
		if(!isspace(ch) && !inwords)           
		{                
			inwords = true;		/*开始一个新单词*/               
			n_words++;			/*统计单词数*/           
		}            
		if(isspace(ch) && inwords)               
			inwords = false;        /*到达单词的尾部*/       
	} 
	
	printf("%d characters read.\n",words);       
	printf("%d words read.\n",n_words);       
	printf("The average number of letters per word is %f.\n",(float)words/(float)n_words);       
	return 0;  
}