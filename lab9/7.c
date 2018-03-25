

#include <stdio.h>

int main(int argc, char **argv)
{
	char c[10];
	char *p;
	p=c;
	scanf("%s",c);
	for(int i=0;i<10;i++)
	printf("\n%c",*(p++));
	return 0;
}

