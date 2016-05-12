#include <stdio.h>

int main(int argc, char* argv[])
{
	int count;
	
	for(count=1; count<argc; count++)
		printf("%s ",argv[argc-count]);
	printf("\n");
	
	return 0;
}

