#include<stdio.h>
#define SIZE 8
int main()
{
/*	char ch;
	
	scanf("%c",&ch);
	while(ch != 'g')
	{
		printf("%c",++ch);
		scanf("%c",&ch);
	}
*/
	int by_two[SIZE];
	int index;
	
/*	for(index = 1; index <= SIZE; index++)
		by_two[index-1] = 2 * index;
*/
	for(index = 0; index < SIZE; index++)
		by_two[index] = 2 * (index+1);
	for(index = 0; index < SIZE; index++)
		printf("%d ",by_two[index]);
	printf("\n");
	return 0;
}