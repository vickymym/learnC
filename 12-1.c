#include<stdio.h>

void critic(int* p);

int main()
{
	int units=0;
	
	printf("how many pounds to  frikin of butter?\n");
	scanf("%d",&units);
	while(units != 56)
		critic(&units);
	printf("you must have looked it up!\n");
	
	return 0;
}

void critic(int* p)
{
	printf("No luck,chummy. Try again.\n");
	scanf("%d",p);
}
