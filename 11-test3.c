#include <stdio.h>
#define MAX 20

int main()
{
	char first[MAX];
	char last[MAX];
	char formal[2*MAX+10];
	double prize;
	
	puts("enter your first name:");
	gets(first);
	puts("enter your last name:");
	gets(last);
	puts("enter your prize money:");
	scanf("%lf",&prize);
	sprintf(formal,"%s,%-19s: $%6.2f\n",last,first,prize);
	puts(formal);
	printf("***************************");
}