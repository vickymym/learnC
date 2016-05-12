#include<stdio.h>

void chline(char ch, int i, int j);

int main()
{
	chline('A',2,5);
	return 0;
}

void chline(char ch, int i, int j)
{
	int k;
	
	for(k=0; k<j; k++)
	{
		if(k<i-1)
			printf("*");
		else
			printf("%c",ch);
	}
	printf("\n");
}
/*
#include<stdio.h>
void chline(char , int , int );   
int main(void) 
{   
	int x,y;  
	char ch;   
	printf("input a char:");  
	scanf("%c",&ch);   
	printf("input two int:");  
	scanf("%d%d",&x,&y);   
	chline(ch,x,y);  
	return 0;  
}   
void chline(char ch, int i, int j) 
{   
	int k;   
	for(k=1; k<i; k++)   
		printf(" ");  
	for(  ;k<=j; k++)   
		printf("%c",ch);  
	printf("\n"); 
} 
*/