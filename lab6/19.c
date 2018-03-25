

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	char c[5];
	printf("Enter string");
	gets(c);
	int l1,l2;
	for(l1=0;c[l1]!='\0';l1++);
	l2=strlen(c);
	printf("%d %d ",l1,l2);
	return 0;
}

