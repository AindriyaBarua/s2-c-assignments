

#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	char c[50];
	printf("Enter string ");
	scanf("%s",c);
	for(int i=0;c[i]!='\0';i++)
	c[i]=toupper(c[i]);
	puts(c);
	return 0;
}

