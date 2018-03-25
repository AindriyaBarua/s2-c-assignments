

#include <stdio.h>

int main(int argc, char **argv)
{
	int n,p;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		p=i*n;
		printf(" %d * %d = %d\n",i,n,p);
	}
	
	return 0;
	
}

