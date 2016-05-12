#include <stdio.h>
#include <string.h>
#define SIZE 255

void output_orignal_string(char ori_string[]);
void output_upper_string(char ori_string[]);
void output_lower_string(char ori_string[]);

int main(int argc, char* argv[])
{	
	char string[SIZE]={0};
	char ch;
	int index=0;
	
	while((ch=getchar()) != EOF)
	{
		string[index]=ch;
		index++;
	}
	string[index]='\0';
	
	if(strcmp(argv[1],"-p") == 0)
		output_orignal_string(string);
	if(strcmp(argv[1],"-u") == 0)
		output_upper_string(string);
	if(strcmp(argv[1],"-l") == 0)
		output_lower_string(string);
	
	return 0;
}

void output_orignal_string(char ori_string[])
{
	int i=0;
	
	while(*(ori_string+i) != '\0')
	{
		putchar(*(ori_string+i));
		i++;
	}
	putchar('\n');
}

void output_upper_string(char ori_string[])
{
	int i=0;
	char target[SIZE]={0};
	
	strncpy(target,ori_string,strlen(ori_string)+1);
	
	while(*(target+i) != '\0')
	{
		if(isalpha(*(target+i)) && islower(*(target+i)))
			*(target+i) = *(target+i)-('a'-'A');
		putchar(*(target+i));
		i++;
	}
	putchar('\n');
}

void output_lower_string(char ori_string[])
{
	int i=0;
	char target[SIZE]={0};
	
	strncpy(target,ori_string,strlen(ori_string)+1);
	
	while(*(target+i) != '\0')
	{
		if(isalpha(*(target+i)) && isupper(*(target+i)))
			*(target+i) = *(target+i)+('a'-'A');
		putchar(*(target+i));
		i++;
	}
	putchar('\n');
}