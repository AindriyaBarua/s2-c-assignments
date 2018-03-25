
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int *p[5][5];
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	p[i][j]=(int *)malloc(20);
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	for(int k=0;k<5;k++)
	*(p[i][j]+k)=1+k;
	for(int i=0;i<5;i++)
	{for(int j=0;j<5;j++)
	{for(int k=0;k<5;k++)
		printf("%d",*(p[i][j]+k));
		printf("\n");
	}printf("\n");
}
	return 0;
}

