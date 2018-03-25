

#include <stdio.h>

int main(int argc, char **argv)
{
	long a;
	int n;
	a=2;
	printf("Enter n:");
	scanf("%d",&n);
	while(a<n)
	{
		printf(" \t %ld",a);
		a=a*a;
	}
	return 0;
}

