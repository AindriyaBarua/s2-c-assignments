

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	char c1[n],c2[n],c3[n];
	printf("Enter string");
	scanf("%s",c1);
	for(int i=0;c1[i]!='\0';i++)
	c2[i]=c1[i];
	puts(c2);printf("\n\n");
	strcpy(c3,c1);
	puts(c3);
	return 0;
}

