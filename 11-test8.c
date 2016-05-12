//11-10
char * space(char *pt)
{
	char *pc=NULL;
	while(*pt)
	{
		if(*pt != ' ')
			pt++;
		else
			pc=pt;
	}
	
	return pc;
}