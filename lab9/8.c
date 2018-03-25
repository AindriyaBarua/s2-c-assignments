
#include <stdio.h>
void charac(char *c)
{
	for(int i=0;*(c+i)!='\0';i++)
	printf("\t%c",*(c+i));
}
int main(int argc, char **argv)
{
	char ch[20];
	printf("Enter string");
	scanf("%s",ch);
	charac(ch);
	return 0;
}

