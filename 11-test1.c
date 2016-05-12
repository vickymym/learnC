#include <stdio.h>

int main()
{
	//printf("%s %p %c\n","We", "are", *"space farers");
	const char *p1 = "Klingon";
	//p1[0]='F';
	printf("Klingon");
	printf(":Beware the %ss!\n","Klingon");
	
	return 0;
}