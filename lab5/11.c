

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	float sum=0;
	printf("Enter n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	sum=sum+(float)1/i;
	printf("sum:%f",sum);
	return 0;
}

