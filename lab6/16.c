


#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	char c1[50],c2[50],c3[50];

	printf("\nscanf method\n");
	scanf("%s",c1);
	printf("%s",c1);
	printf("\ngets method\n");
	gets(c2);
	puts(c2);
	printf("\ngetchar method\n");
	int c=0;
	while(c<n)
	{
		c3[c]=getchar();
		c++;
	}
	
	printf("%c",putchar(c3));
	return 0;
}

