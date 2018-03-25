

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	char c1[50],c2[50];
	int m,n,k;
	printf("Enter 2 strings ");
	scanf("%s",c1);
	scanf("%s",c2);
	m=strlen(c1);
	n=strlen(c2);
	k=m+n;
	char c3[k];
	for(int i=0;i<m;i++)
	c3[i]=c1[i];
	for(int i=m,j=0;i<k;i++,j++)
	c3[i]=c2[j];
	puts(c3);
	strcat(c1,c2);
	printf("\n\n");
	puts(c1);
	return 0;
}

