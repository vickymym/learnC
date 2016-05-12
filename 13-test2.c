#include<stdio.h>
#include<stdlib.h>
#define MAX 40

int main()
{
	FILE *fp;
	char words[MAX];
	
	if((fp=fopen("words","a+")) == NULL)
	{
		fprintf(stdout,"Can't open \"words\" file.\n");
		exit(0);
	}
	
	puts("Enter words to add to the file;press the Enter key at the beginning of a line to terminste.");
	while(gets(words) != NULL && words[0] != '\0')
		fprintf(fp,"%s ",words);
	puts("File contents: ");
	rewind(fp);
	while(fscanf(fp,"%s ",words) == 1)
		puts(words);
	if(fclose(fp) != 0)
		fprintf(stderr,"Error closing file\n");
	
	return 0;
}